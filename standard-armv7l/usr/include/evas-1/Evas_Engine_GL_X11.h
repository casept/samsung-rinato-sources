#ifndef _EVAS_ENGINE_GL_X11_H
#define _EVAS_ENGINE_GL_X11_H

#include <X11/Xlib.h>

typedef struct _Evas_Engine_Info_GL_X11              Evas_Engine_Info_GL_X11;

/* have this feature */
#define EVAS_ENGINE_GL_X11_SWAP_MODE_EXISTS 1

typedef enum _Evas_Engine_Info_GL_X11_Swap_Mode
{
   EVAS_ENGINE_GL_X11_SWAP_MODE_AUTO      = 0,
   EVAS_ENGINE_GL_X11_SWAP_MODE_FULL      = 1,
   EVAS_ENGINE_GL_X11_SWAP_MODE_COPY      = 2,
   EVAS_ENGINE_GL_X11_SWAP_MODE_DOUBLE    = 3,
   EVAS_ENGINE_GL_X11_SWAP_MODE_TRIPLE    = 4,
   EVAS_ENGINE_GL_X11_SWAP_MODE_QUADRUPLE = 5
} Evas_Engine_Info_GL_X11_Swap_Mode;

struct _Evas_Engine_Info_GL_X11
{
   /* PRIVATE - don't mess with this baby or evas will poke its tongue out */
   /* at you and make nasty noises */
   Evas_Engine_Info magic;

   /* engine specific data & parameters it needs to set up */
   struct {
      Display     *display;
      Drawable     drawable;
      Visual      *visual;
      Colormap     colormap;
      int          depth;
      int          screen;
      int          rotation;
      unsigned int destination_alpha  : 1;
   } info;
   /* engine specific function calls to query stuff about the destination */
   /* engine (what visual & colormap & depth to use, performance info etc. */
   struct {
      Visual *  (*best_visual_get)   (Evas_Engine_Info_GL_X11 *einfo);
      Colormap  (*best_colormap_get) (Evas_Engine_Info_GL_X11 *einfo);
      int       (*best_depth_get)    (Evas_Engine_Info_GL_X11 *einfo);
   } func;

   struct {
      void      (*pre_swap)          (void *data, Evas *e);
      void      (*post_swap)         (void *data, Evas *e);

      void       *data; // data for callback calls
   } callback;

   /* non-blocking or blocking mode */
   Evas_Engine_Render_Mode render_mode;

   unsigned char vsync : 1; // does nothing right now
   unsigned char indirect : 1; // use indirect rendering
   unsigned char swap_mode : 4; // what swap mode to assume

   /* TIZEN ONLY
    * Disable sync draw done from application side when it is needed.
    * Currently this is set true when a back-end engine uses DRI2.
    * This depends on engine so we need to check it from evas engine.
    */
   Eina_Bool disable_sync_draw_done : 1;
};
#endif

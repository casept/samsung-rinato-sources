/**
 * @defgroup Elm_Gesture_Layer Gesture Layer
 * @ingroup Elementary
 *
 * @image html gesture_layer_inheritance_tree.png
 * @image latex gesture_layer_inheritance_tree.eps
 *
 * Gesture Layer Usage:
 *
 * Use Gesture Layer to detect gestures.
 * The advantage is that you don't have to implement
 * gesture detection, just set callbacks of gesture state.
 * By using gesture layer we make standard interface.
 *
 * In order to use Gesture Layer you start with @ref elm_gesture_layer_add
 * with a parent object parameter.
 * Next 'activate' gesture layer with a @ref elm_gesture_layer_attach
 * call. Usually with same object as target (2nd parameter).
 *
 * Now you need to tell gesture layer what gestures you follow.
 * This is done with @ref elm_gesture_layer_cb_set call.
 * By setting the callback you actually saying to gesture layer:
 * I would like to know when the gesture @ref Elm_Gesture_Type
 * switches to state @ref Elm_Gesture_State.
 *
 * Next, you need to implement the actual action that follows the input
 * in your callback.
 *
 * Note that if you like to stop being reported about a gesture, just set
 * all callbacks referring this gesture to NULL.
 * (again with @ref elm_gesture_layer_cb_set)
 *
 * The information reported by gesture layer to your callback is depending
 * on @ref Elm_Gesture_Type :
 * @ref Elm_Gesture_Taps_Info is the info reported for tap gestures:
 * @ref ELM_GESTURE_N_TAPS, @ref ELM_GESTURE_N_LONG_TAPS,
 * @ref ELM_GESTURE_N_DOUBLE_TAPS, @ref ELM_GESTURE_N_TRIPLE_TAPS.
 *
 * @ref Elm_Gesture_Momentum_Info is info reported for momentum gestures:
 * @ref ELM_GESTURE_MOMENTUM.
 *
 * @ref Elm_Gesture_Line_Info is the info reported for line gestures:
 * (this also contains @ref Elm_Gesture_Momentum_Info internal structure)
 * @ref ELM_GESTURE_N_LINES, @ref ELM_GESTURE_N_FLICKS.
 * Note that we consider a flick as a line-gesture that should be completed
 * in flick-time-limit as defined in @ref Config.
 *
 * @ref Elm_Gesture_Zoom_Info is the info reported for @ref ELM_GESTURE_ZOOM gesture.
 *
 * @ref Elm_Gesture_Rotate_Info is the info reported for @ref ELM_GESTURE_ROTATE gesture.
 *
 *
 * Gesture Layer Tweaks:
 *
 * Note that line, flick, gestures can start without the need to remove fingers from surface.
 * When user fingers rests on same-spot gesture is ended and starts again when fingers moved.
 *
 * Setting glayer_continues_enable to false in @ref Config will change this behavior
 * so gesture starts when user touches (a *DOWN event) touch-surface
 * and ends when no fingers touches surface (a *UP event).
 *
 * Supported elm_object common APIs.
 * @li @ref elm_object_disabled_set
 * @li @ref elm_object_disabled_get
 *
 * @{
 *
 */

/**
 * @enum _Elm_Gesture_Type
 * Enum of supported gesture types.
 */
enum _Elm_Gesture_Type
{
   ELM_GESTURE_FIRST = 0,

   ELM_GESTURE_N_TAPS, /**< N fingers single taps */
   ELM_GESTURE_N_LONG_TAPS, /**< N fingers single long-taps */
   ELM_GESTURE_N_DOUBLE_TAPS, /**< N fingers double-single taps */
   ELM_GESTURE_N_TRIPLE_TAPS, /**< N fingers triple-single taps */

   ELM_GESTURE_MOMENTUM, /**< Reports momentum in the direction of move */

   ELM_GESTURE_N_LINES, /**< N fingers line gesture */
   ELM_GESTURE_N_FLICKS, /**< N fingers flick gesture */

   ELM_GESTURE_ZOOM, /**< Zoom */
   ELM_GESTURE_ROTATE, /**< Rotate */

   ELM_GESTURE_LAST
};

/**
 * @typedef Elm_Gesture_Type
 * Convenient macro around #_Elm_Gesture_Type
 */
typedef enum _Elm_Gesture_Type Elm_Gesture_Type;

/**
 * @enum _Elm_Gesture_State
 * Enum of gesture states.
 */
enum _Elm_Gesture_State
{
   ELM_GESTURE_STATE_UNDEFINED = -1, /**< Gesture not STARTed */
   ELM_GESTURE_STATE_START, /**< Gesture STARTed     */
   ELM_GESTURE_STATE_MOVE, /**< Gesture is ongoing  */
   ELM_GESTURE_STATE_END, /**< Gesture completed   */
   ELM_GESTURE_STATE_ABORT /**< Ongoing gesture was ABORTed */
};

/**
 * @typedef Elm_Gesture_State
 * Convenient macro around #_Elm_Gesture_State
 */
typedef enum _Elm_Gesture_State Elm_Gesture_State;

/**
 * @struct _Elm_Gesture_Taps_Info
 * Struct holds taps info for user
 */
struct _Elm_Gesture_Taps_Info
{
   Evas_Coord   x, y; /**< Holds center point between fingers */
   unsigned int n; /**< Number of fingers tapped           */
   unsigned int timestamp; /**< event timestamp       */
};

/**
 * @typedef Elm_Gesture_Taps_Info
 * holds taps info for user
 */
typedef struct _Elm_Gesture_Taps_Info Elm_Gesture_Taps_Info;

/**
 * @struct _Elm_Gesture_Momentum_Info
 * Struct holds momentum info for user
 * x1 and y1 are not necessarily in sync
 * x1 holds x value of x direction starting point
 * and same holds for y1.
 * This is noticeable when doing V-shape movement
 */
struct _Elm_Gesture_Momentum_Info /* Report line ends, timestamps, and momentum computed        */
{Evas_Coord   x1; /**< Final-swipe direction starting point on X */
 Evas_Coord   y1; /**< Final-swipe direction starting point on Y */
 Evas_Coord   x2; /**< Final-swipe direction ending point on X   */
 Evas_Coord   y2; /**< Final-swipe direction ending point on Y   */

 unsigned int tx; /**< Timestamp of start of final x-swipe */
 unsigned int ty; /**< Timestamp of start of final y-swipe */

 Evas_Coord   mx; /**< Momentum on X */
 Evas_Coord   my; /**< Momentum on Y */

 unsigned int n; /**< Number of fingers */
};

/**
 * @typedef Elm_Gesture_Momentum_Info
 * holds momentum info for user
 */
typedef struct _Elm_Gesture_Momentum_Info Elm_Gesture_Momentum_Info;

/**
 * @struct _Elm_Gesture_Line_Info
 * Struct holds line info for user
 */
struct _Elm_Gesture_Line_Info   /* Report line ends, timestamps, and momentum computed      */
{Elm_Gesture_Momentum_Info momentum; /**< Line momentum info */
 double                    angle; /**< Angle (direction) of lines  */
};

/**
 * @typedef Elm_Gesture_Line_Info
 * Holds line info for user
 */
typedef struct _Elm_Gesture_Line_Info Elm_Gesture_Line_Info;

/**
 * @struct _Elm_Gesture_Zoom_Info
 * Struct holds zoom info for user
 */
struct _Elm_Gesture_Zoom_Info
{
   Evas_Coord x, y; /**< Holds zoom center point reported to user  */
   Evas_Coord radius; /**< Holds radius between fingers reported to user */
   double     zoom; /**< Zoom value: 1.0 means no zoom             */
   double     momentum; /**< Zoom momentum: zoom growth per second (NOT YET SUPPORTED) */
};

/**
 * @typedef Elm_Gesture_Zoom_Info
 * Holds zoom info for user
 */
typedef struct _Elm_Gesture_Zoom_Info Elm_Gesture_Zoom_Info;

/**
 * @struct _Elm_Gesture_Rotate_Info
 * Struct holds rotation info for user
 */
struct _Elm_Gesture_Rotate_Info
{
   Evas_Coord x, y; /**< Holds zoom center point reported to user      */
   Evas_Coord radius; /**< Holds radius between fingers reported to user */
   double     base_angle; /**< Holds start-angle */
   double     angle; /**< Rotation value: 0.0 means no rotation         */
   double     momentum; /**< Rotation momentum: rotation done per second (NOT YET SUPPORTED) */
};

/**
 * @typedef Elm_Gesture_Rotate_Info
 * Holds rotation info for user
 */
typedef struct _Elm_Gesture_Rotate_Info Elm_Gesture_Rotate_Info;

/**
 * @typedef Elm_Gesture_Event_Cb
 * User callback used to stream gesture info from gesture layer
 * @param data user data
 * @param event_info gesture report info
 * Returns a flag field to be applied on the causing event.
 * You should probably return EVAS_EVENT_FLAG_ON_HOLD if your widget acted
 * upon the event, in an irreversible way.
 *
 */
typedef Evas_Event_Flags (*Elm_Gesture_Event_Cb)(void *data, void *event_info);

/**
 * Use function to set callbacks to be notified about
 * change of state of gesture.
 * When a user registers a callback with this function
 * this means this gesture has to be tested.
 *
 * When ALL callbacks for a gesture are set to NULL
 * it means user isn't interested in gesture-state
 * and it will not be tested.
 *
 * @param obj gesture-layer.
 * @param idx The gesture you would like to track its state.
 * @param cb callback function pointer.
 * @param cb_type what event this callback tracks: START, MOVE, END, ABORT.
 * @param data user info to be sent to callback (usually, Smart Data)
 *
 */
EAPI void         elm_gesture_layer_cb_set(Evas_Object *obj, Elm_Gesture_Type idx, Elm_Gesture_State cb_type, Elm_Gesture_Event_Cb cb, void *data);

/**
 * Call this function to get repeat-events settings.
 *
 * @param obj gesture-layer.
 *
 * @return repeat events settings.
 * @see elm_gesture_layer_hold_events_set()
 */
EAPI Eina_Bool    elm_gesture_layer_hold_events_get(const Evas_Object *obj);

/**
 * This function is to make gesture-layer repeat events.
 * Set this if you like to get the raw events only if gestures were not
 * detected.
 * Clear this if you like gesture layer to forward events as testing gestures.
 *
 * @param obj gesture layer.
 * @param hold_events hold events or not.
 *
 */
EAPI void         elm_gesture_layer_hold_events_set(Evas_Object *obj, Eina_Bool hold_events);

/**
 * This function sets step-value for zoom action.
 * Set step to any positive value.
 * Cancel step setting by setting to 0
 *
 * @param obj gesture-layer.
 * @param step new zoom step value.
 *
 * @see elm_gesture_layer_zoom_step_get()
 */
EAPI void         elm_gesture_layer_zoom_step_set(Evas_Object *obj, double step);

/**
 * This function returns step-value for zoom action.
 *
 * @param obj gesture-layer.
 * @return zoom step value.
 *
 * @see elm_gesture_layer_zoom_step_set()
 */
EAPI double       elm_gesture_layer_zoom_step_get(const Evas_Object *obj);

/**
 * This function sets step-value for rotate action.
 * Set step to any positive value.
 * Cancel step setting by setting to 0
 *
 * @param obj gesture-layer.
 * @param step new rotate step value.
 *
 */
EAPI void         elm_gesture_layer_rotate_step_set(Evas_Object *obj, double step);

/**
 * This function returns step-value for rotate action.
 *
 * @param obj gesture-layer.
 * @return rotate step value.
 *
 */
EAPI double       elm_gesture_layer_rotate_step_get(const Evas_Object *obj);

/**
 * Attach a given gesture layer widget to an Evas object, thus setting
 * the widget's @b target.
 *
 * @param obj A gesture layer to attach an object to.
 * @param target Object to attach to @a obj (target)
 *
 * A gesture layer target may be whichever Evas object one
 * chooses. This will be object @a obj will listen all mouse and key
 * events from, to report the gestures made upon it back.
 *
 * @return @c EINA_TRUE, on success, @c EINA_FALSE otherwise.
 *
 */
EAPI Eina_Bool    elm_gesture_layer_attach(Evas_Object *obj, Evas_Object *target);

/**
 * Call this function to construct a new gesture-layer object.
 *
 * @param parent The gesture layer's parent widget.
 *
 * @return A new gesture layer object.
 *
 * This does not activate the gesture layer. You have to
 * call elm_gesture_layer_attach() in order to 'activate' gesture-layer.
 *
 */
EAPI Evas_Object *elm_gesture_layer_add(Evas_Object *parent);

/**
 * @since 1.8
 * This function sets the gesture layer line min length of an object
 *
 * @param obj gesture-layer.
 * @param line_min_length the length.
 *
 */
EAPI void elm_gesture_layer_line_min_length_set(Evas_Object *obj, int line_min_length);

/**
 * @since 1.8
 * This function returns the gesture layer line min length of an object
 *
 * @param obj gesture-layer.
 * @return the length.
 *
 */
EAPI int elm_gesture_layer_line_min_length_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer zoom distance tolerance of an object
 *
 * @param obj gesture-layer.
 * @param zoom_distance_tolerance zoom distance tolerance
 *
 */
EAPI void elm_gesture_layer_zoom_distance_tolerance_set(Evas_Object *obj, Evas_Coord zoom_distance_tolerance);

/**
 * @since 1.8
 * This function returns the gesture layer zoom distance tolerance of an object
 *
 * @param obj gesture-layer.
 * @return zoom distance tolerance
 *
 */
EAPI Evas_Coord elm_gesture_layer_zoom_distance_tolerance_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer line distance tolerance of an object
 *
 * @param obj gesture-layer.
 * @param line_distance_tolerance line distance tolerance
 *
 */
EAPI void elm_gesture_layer_line_distance_tolerance_set(Evas_Object *obj, Evas_Coord line_distance_tolerance);

/**
 * @since 1.8
 * This function returns the gesture layer line distance tolerance of an object
 *
 * @param obj gesture-layer.
 * @return line distance tolerance
 *
 */
EAPI Evas_Coord elm_gesture_layer_line_distance_tolerance_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer line angular tolerance of an object
 *
 * @param obj gesture-layer.
 * @param line_angular_tolerance line angular tolerance
 *
 */
EAPI void elm_gesture_layer_line_angular_tolerance_set(Evas_Object *obj, double line_angular_tolerance);

/**
 * @since 1.8
 * This function returns the gesture layer line angular tolerance of an object
 *
 * @param obj gesture-layer.
 * @return line angular tolerance
 *
 */
EAPI double elm_gesture_layer_line_angular_tolerance_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer zoom wheel factor of an object
 *
 * @param obj gesture-layer.
 * @param zoom_wheel_factor zoom wheel factor
 *
 */
EAPI void elm_gesture_layer_zoom_wheel_factor_set(Evas_Object *obj, double zoom_wheel_factor);

/**
 * @since 1.8
 * This function returns the gesture layer zoom wheel factor of an object
 *
 * @param obj gesture-layer.
 * @return zoom wheel factor
 *
 */
EAPI double elm_gesture_layer_zoom_wheel_factor_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer zoom finger factor of an object
 *
 * @param obj gesture-layer.
 * @param zoom_finger_factor zoom finger factor
 *
 */
EAPI void elm_gesture_layer_zoom_finger_factor_set(Evas_Object *obj, double zoom_finger_factor);

/**
 * @since 1.8
 * This function returns the gesture layer zoom finger factor of an object
 *
 * @param obj gesture-layer.
 * @return zoom finger factor
 *
 */
EAPI double elm_gesture_layer_zoom_finger_factor_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer rotate angular tolerance of an object
 *
 * @param obj gesture-layer.
 * @param rotate_angular_tolerance rotate angular tolerance
 *
 */
EAPI void elm_gesture_layer_rotate_angular_tolerance_set(Evas_Object *obj, double rotate_angular_tolerance);

/**
 * @since 1.8
 * This function returns the gesture layer rotate angular tolerance of an object
 *
 * @param obj gesture-layer.
 * @return rotate angular tolerance
 *
 */
EAPI double elm_gesture_layer_rotate_angular_tolerance_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer flick time limit (in ms) of an object
 *
 * @param obj gesture-layer.
 * @param flick_time_limit_ms flick time limit (in ms)
 *
 */
EAPI void elm_gesture_layer_flick_time_limit_ms_set(Evas_Object *obj, unsigned int flick_time_limit_ms);

/**
 * @since 1.8
 * This function returns the gesture layer flick time limit (in ms) of an object
 *
 * @param obj gesture-layer.
 * @return flick time limit (in ms)
 *
 */
EAPI unsigned int elm_gesture_layer_flick_time_limit_ms_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer long tap start timeout of an object
 *
 * @param obj gesture-layer.
 * @param long_tap_start_timeout long tap start timeout
 *
 */
EAPI void elm_gesture_layer_long_tap_start_timeout_set(Evas_Object *obj, double long_tap_start_timeout);

/**
 * @since 1.8
 * this function returns the gesture layer long tap start timeout of an object
 *
 * @param obj gesture-layer.
 * @return long tap start timeout
 *
 */
EAPI double elm_gesture_layer_long_tap_start_timeout_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer continues enable of an object
 *
 * @param obj gesture-layer.
 * @param continues_enable continues enable
 *
 */
EAPI void elm_gesture_layer_continues_enable_set(Evas_Object *obj, Eina_Bool continues_enable);

/**
 * @since 1.8
 * This function returns the gesture layer continues enable of an object
 *
 * @param obj gesture-layer.
 * @return continues enable
 *
 */
EAPI Eina_Bool elm_gesture_layer_continues_enable_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer double tap timeout of an object
 *
 * @param obj gesture-layer.
 * @param double_tap_timeout double tap timeout
 *
 */
EAPI void elm_gesture_layer_double_tap_timeout_set(Evas_Object *obj, double double_tap_timeout);

/**
 * @since 1.8
 * this function returns the gesture layer double tap timeout of an object
 *
 * @param obj gesture-layer.
 * @return double tap timeout
 *
 */
EAPI double elm_gesture_layer_double_tap_timeout_get(const Evas_Object *obj);

/**
 * @since 1.8
 * This function sets the gesture layer finger-size for taps
 * If not set, this size taken from elm_config.
 * Set to ZERO if you want GLayer to use system finger size value (default)
 * It is recommended to not set a too much big or little value to avoid weird
 * behaviors.
 *
 * @param obj gesture-layer.
 * @param fsize Finger size
 *
 */
EAPI void elm_gesture_layer_tap_finger_size_set(Evas_Object *obj, Evas_Coord sz);

/**
 * @since 1.8
 * This function returns the gesture layer finger-size for taps
 *
 * @param obj gesture-layer.
 * @return Finger size that is currently used by Gesture Layer for taps.
 *
 */
EAPI Evas_Coord elm_gesture_layer_tap_finger_size_get(const Evas_Object *obj);

/**
 * @}
 */

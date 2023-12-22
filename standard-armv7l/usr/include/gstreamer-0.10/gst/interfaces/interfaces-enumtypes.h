


#ifndef __GST_INTERFACES_ENUM_TYPES_H__
#define __GST_INTERFACES_ENUM_TYPES_H__

#include <glib-object.h>

G_BEGIN_DECLS

/* enumerations from "colorbalance.h" */
GType gst_color_balance_type_get_type (void);
#define GST_TYPE_COLOR_BALANCE_TYPE (gst_color_balance_type_get_type())

/* enumerations from "cameracontrol.h" */
GType gst_camera_control_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_TYPE (gst_camera_control_type_get_type())
GType gst_camera_control_exposure_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_EXPOSURE_TYPE (gst_camera_control_exposure_type_get_type())
GType gst_camera_control_capture_mode_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_CAPTURE_MODE_TYPE (gst_camera_control_capture_mode_type_get_type())
GType capture_mode_type_get_type (void);
#define GST_TYPE_MODE_TYPE (capture_mode_type_get_type())
GType gst_camera_control_strobe_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_STROBE_TYPE (gst_camera_control_strobe_type_get_type())
GType gst_camera_control_face_detect_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_FACE_DETECT_TYPE (gst_camera_control_face_detect_type_get_type())
GType gst_camera_control_zoom_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_ZOOM_TYPE (gst_camera_control_zoom_type_get_type())
GType gst_camera_control_part_color_type_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_PART_COLOR_TYPE (gst_camera_control_part_color_type_get_type())
GType gst_camera_control_capture_command_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_CAPTURE_COMMAND (gst_camera_control_capture_command_get_type())
GType gst_camera_control_record_command_get_type (void);
#define GST_TYPE_CAMERA_CONTROL_RECORD_COMMAND (gst_camera_control_record_command_get_type())

/* enumerations from "mixer.h" */
GType gst_mixer_type_get_type (void);
#define GST_TYPE_MIXER_TYPE (gst_mixer_type_get_type())
GType gst_mixer_message_type_get_type (void);
#define GST_TYPE_MIXER_MESSAGE_TYPE (gst_mixer_message_type_get_type())
GType gst_mixer_flags_get_type (void);
#define GST_TYPE_MIXER_FLAGS (gst_mixer_flags_get_type())

/* enumerations from "mixertrack.h" */
GType gst_mixer_track_flags_get_type (void);
#define GST_TYPE_MIXER_TRACK_FLAGS (gst_mixer_track_flags_get_type())

/* enumerations from "navigation.h" */
GType gst_navigation_command_get_type (void);
#define GST_TYPE_NAVIGATION_COMMAND (gst_navigation_command_get_type())
GType gst_navigation_query_type_get_type (void);
#define GST_TYPE_NAVIGATION_QUERY_TYPE (gst_navigation_query_type_get_type())
GType gst_navigation_message_type_get_type (void);
#define GST_TYPE_NAVIGATION_MESSAGE_TYPE (gst_navigation_message_type_get_type())
GType gst_navigation_event_type_get_type (void);
#define GST_TYPE_NAVIGATION_EVENT_TYPE (gst_navigation_event_type_get_type())

/* enumerations from "streamvolume.h" */
GType gst_stream_volume_format_get_type (void);
#define GST_TYPE_STREAM_VOLUME_FORMAT (gst_stream_volume_format_get_type())

/* enumerations from "tunerchannel.h" */
GType gst_tuner_channel_flags_get_type (void);
#define GST_TYPE_TUNER_CHANNEL_FLAGS (gst_tuner_channel_flags_get_type())
G_END_DECLS

#endif /* __GST_INTERFACES_ENUM_TYPES_H__ */




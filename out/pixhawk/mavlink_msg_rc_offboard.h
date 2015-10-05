// MESSAGE RC_OFFBOARD PACKING

#define MAVLINK_MSG_ID_RC_OFFBOARD 207

typedef struct __mavlink_rc_offboard_t
{
 float throttle; /*< */
 float pitch; /*< */
 float roll; /*< */
 float yaw; /*< */
 uint8_t target_system; /*< System ID*/
 uint8_t target_component; /*< Component ID*/
 uint8_t throttle_mode; /*< 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC*/
 uint8_t pitch_mode; /*< 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC*/
 uint8_t roll_mode; /*< 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC*/
 uint8_t yaw_mode; /*< 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC*/
} mavlink_rc_offboard_t;

#define MAVLINK_MSG_ID_RC_OFFBOARD_LEN 22
#define MAVLINK_MSG_ID_207_LEN 22

#define MAVLINK_MSG_ID_RC_OFFBOARD_CRC 231
#define MAVLINK_MSG_ID_207_CRC 231



#define MAVLINK_MESSAGE_INFO_RC_OFFBOARD { \
	"RC_OFFBOARD", \
	10, \
	{  { "throttle", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rc_offboard_t, throttle) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rc_offboard_t, pitch) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_rc_offboard_t, roll) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_rc_offboard_t, yaw) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_rc_offboard_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_rc_offboard_t, target_component) }, \
         { "throttle_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_rc_offboard_t, throttle_mode) }, \
         { "pitch_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_rc_offboard_t, pitch_mode) }, \
         { "roll_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_rc_offboard_t, roll_mode) }, \
         { "yaw_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_rc_offboard_t, yaw_mode) }, \
         } \
}


/**
 * @brief Pack a rc_offboard message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param throttle 
 * @param pitch 
 * @param roll 
 * @param yaw 
 * @param throttle_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param pitch_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param roll_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param yaw_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rc_offboard_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t target_system, uint8_t target_component, float throttle, float pitch, float roll, float yaw, uint8_t throttle_mode, uint8_t pitch_mode, uint8_t roll_mode, uint8_t yaw_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RC_OFFBOARD_LEN];
	_mav_put_float(buf, 0, throttle);
	_mav_put_float(buf, 4, pitch);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, yaw);
	_mav_put_uint8_t(buf, 16, target_system);
	_mav_put_uint8_t(buf, 17, target_component);
	_mav_put_uint8_t(buf, 18, throttle_mode);
	_mav_put_uint8_t(buf, 19, pitch_mode);
	_mav_put_uint8_t(buf, 20, roll_mode);
	_mav_put_uint8_t(buf, 21, yaw_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#else
	mavlink_rc_offboard_t packet;
	packet.throttle = throttle;
	packet.pitch = pitch;
	packet.roll = roll;
	packet.yaw = yaw;
	packet.target_system = target_system;
	packet.target_component = target_component;
	packet.throttle_mode = throttle_mode;
	packet.pitch_mode = pitch_mode;
	packet.roll_mode = roll_mode;
	packet.yaw_mode = yaw_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RC_OFFBOARD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_OFFBOARD_LEN, MAVLINK_MSG_ID_RC_OFFBOARD_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
}

/**
 * @brief Pack a rc_offboard message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param throttle 
 * @param pitch 
 * @param roll 
 * @param yaw 
 * @param throttle_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param pitch_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param roll_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param yaw_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rc_offboard_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t target_system,uint8_t target_component,float throttle,float pitch,float roll,float yaw,uint8_t throttle_mode,uint8_t pitch_mode,uint8_t roll_mode,uint8_t yaw_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RC_OFFBOARD_LEN];
	_mav_put_float(buf, 0, throttle);
	_mav_put_float(buf, 4, pitch);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, yaw);
	_mav_put_uint8_t(buf, 16, target_system);
	_mav_put_uint8_t(buf, 17, target_component);
	_mav_put_uint8_t(buf, 18, throttle_mode);
	_mav_put_uint8_t(buf, 19, pitch_mode);
	_mav_put_uint8_t(buf, 20, roll_mode);
	_mav_put_uint8_t(buf, 21, yaw_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#else
	mavlink_rc_offboard_t packet;
	packet.throttle = throttle;
	packet.pitch = pitch;
	packet.roll = roll;
	packet.yaw = yaw;
	packet.target_system = target_system;
	packet.target_component = target_component;
	packet.throttle_mode = throttle_mode;
	packet.pitch_mode = pitch_mode;
	packet.roll_mode = roll_mode;
	packet.yaw_mode = yaw_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_RC_OFFBOARD;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RC_OFFBOARD_LEN, MAVLINK_MSG_ID_RC_OFFBOARD_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
}

/**
 * @brief Encode a rc_offboard struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rc_offboard C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rc_offboard_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rc_offboard_t* rc_offboard)
{
	return mavlink_msg_rc_offboard_pack(system_id, component_id, msg, rc_offboard->target_system, rc_offboard->target_component, rc_offboard->throttle, rc_offboard->pitch, rc_offboard->roll, rc_offboard->yaw, rc_offboard->throttle_mode, rc_offboard->pitch_mode, rc_offboard->roll_mode, rc_offboard->yaw_mode);
}

/**
 * @brief Encode a rc_offboard struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rc_offboard C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rc_offboard_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rc_offboard_t* rc_offboard)
{
	return mavlink_msg_rc_offboard_pack_chan(system_id, component_id, chan, msg, rc_offboard->target_system, rc_offboard->target_component, rc_offboard->throttle, rc_offboard->pitch, rc_offboard->roll, rc_offboard->yaw, rc_offboard->throttle_mode, rc_offboard->pitch_mode, rc_offboard->roll_mode, rc_offboard->yaw_mode);
}

/**
 * @brief Send a rc_offboard message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param throttle 
 * @param pitch 
 * @param roll 
 * @param yaw 
 * @param throttle_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param pitch_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param roll_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 * @param yaw_mode 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rc_offboard_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, float throttle, float pitch, float roll, float yaw, uint8_t throttle_mode, uint8_t pitch_mode, uint8_t roll_mode, uint8_t yaw_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_RC_OFFBOARD_LEN];
	_mav_put_float(buf, 0, throttle);
	_mav_put_float(buf, 4, pitch);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, yaw);
	_mav_put_uint8_t(buf, 16, target_system);
	_mav_put_uint8_t(buf, 17, target_component);
	_mav_put_uint8_t(buf, 18, throttle_mode);
	_mav_put_uint8_t(buf, 19, pitch_mode);
	_mav_put_uint8_t(buf, 20, roll_mode);
	_mav_put_uint8_t(buf, 21, yaw_mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, buf, MAVLINK_MSG_ID_RC_OFFBOARD_LEN, MAVLINK_MSG_ID_RC_OFFBOARD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, buf, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
#else
	mavlink_rc_offboard_t packet;
	packet.throttle = throttle;
	packet.pitch = pitch;
	packet.roll = roll;
	packet.yaw = yaw;
	packet.target_system = target_system;
	packet.target_component = target_component;
	packet.throttle_mode = throttle_mode;
	packet.pitch_mode = pitch_mode;
	packet.roll_mode = roll_mode;
	packet.yaw_mode = yaw_mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, (const char *)&packet, MAVLINK_MSG_ID_RC_OFFBOARD_LEN, MAVLINK_MSG_ID_RC_OFFBOARD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, (const char *)&packet, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_RC_OFFBOARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rc_offboard_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, float throttle, float pitch, float roll, float yaw, uint8_t throttle_mode, uint8_t pitch_mode, uint8_t roll_mode, uint8_t yaw_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, throttle);
	_mav_put_float(buf, 4, pitch);
	_mav_put_float(buf, 8, roll);
	_mav_put_float(buf, 12, yaw);
	_mav_put_uint8_t(buf, 16, target_system);
	_mav_put_uint8_t(buf, 17, target_component);
	_mav_put_uint8_t(buf, 18, throttle_mode);
	_mav_put_uint8_t(buf, 19, pitch_mode);
	_mav_put_uint8_t(buf, 20, roll_mode);
	_mav_put_uint8_t(buf, 21, yaw_mode);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, buf, MAVLINK_MSG_ID_RC_OFFBOARD_LEN, MAVLINK_MSG_ID_RC_OFFBOARD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, buf, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
#else
	mavlink_rc_offboard_t *packet = (mavlink_rc_offboard_t *)msgbuf;
	packet->throttle = throttle;
	packet->pitch = pitch;
	packet->roll = roll;
	packet->yaw = yaw;
	packet->target_system = target_system;
	packet->target_component = target_component;
	packet->throttle_mode = throttle_mode;
	packet->pitch_mode = pitch_mode;
	packet->roll_mode = roll_mode;
	packet->yaw_mode = yaw_mode;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, (const char *)packet, MAVLINK_MSG_ID_RC_OFFBOARD_LEN, MAVLINK_MSG_ID_RC_OFFBOARD_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RC_OFFBOARD, (const char *)packet, MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE RC_OFFBOARD UNPACKING


/**
 * @brief Get field target_system from rc_offboard message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_rc_offboard_get_target_system(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field target_component from rc_offboard message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_rc_offboard_get_target_component(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field throttle from rc_offboard message
 *
 * @return 
 */
static inline float mavlink_msg_rc_offboard_get_throttle(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch from rc_offboard message
 *
 * @return 
 */
static inline float mavlink_msg_rc_offboard_get_pitch(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field roll from rc_offboard message
 *
 * @return 
 */
static inline float mavlink_msg_rc_offboard_get_roll(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw from rc_offboard message
 *
 * @return 
 */
static inline float mavlink_msg_rc_offboard_get_yaw(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field throttle_mode from rc_offboard message
 *
 * @return 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 */
static inline uint8_t mavlink_msg_rc_offboard_get_throttle_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field pitch_mode from rc_offboard message
 *
 * @return 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 */
static inline uint8_t mavlink_msg_rc_offboard_get_pitch_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field roll_mode from rc_offboard message
 *
 * @return 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 */
static inline uint8_t mavlink_msg_rc_offboard_get_roll_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field yaw_mode from rc_offboard message
 *
 * @return 0-override with MAVLINK priority, 1-override with RC priority, 2- add to RC
 */
static inline uint8_t mavlink_msg_rc_offboard_get_yaw_mode(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Decode a rc_offboard message into a struct
 *
 * @param msg The message to decode
 * @param rc_offboard C-struct to decode the message contents into
 */
static inline void mavlink_msg_rc_offboard_decode(const mavlink_message_t* msg, mavlink_rc_offboard_t* rc_offboard)
{
#if MAVLINK_NEED_BYTE_SWAP
	rc_offboard->throttle = mavlink_msg_rc_offboard_get_throttle(msg);
	rc_offboard->pitch = mavlink_msg_rc_offboard_get_pitch(msg);
	rc_offboard->roll = mavlink_msg_rc_offboard_get_roll(msg);
	rc_offboard->yaw = mavlink_msg_rc_offboard_get_yaw(msg);
	rc_offboard->target_system = mavlink_msg_rc_offboard_get_target_system(msg);
	rc_offboard->target_component = mavlink_msg_rc_offboard_get_target_component(msg);
	rc_offboard->throttle_mode = mavlink_msg_rc_offboard_get_throttle_mode(msg);
	rc_offboard->pitch_mode = mavlink_msg_rc_offboard_get_pitch_mode(msg);
	rc_offboard->roll_mode = mavlink_msg_rc_offboard_get_roll_mode(msg);
	rc_offboard->yaw_mode = mavlink_msg_rc_offboard_get_yaw_mode(msg);
#else
	memcpy(rc_offboard, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_RC_OFFBOARD_LEN);
#endif
}

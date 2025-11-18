#pragma once
// MESSAGE AVIANT_INDICATOR_MR_THRUST PACKING

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST 59003


typedef struct __mavlink_aviant_indicator_mr_thrust_t {
 float thrust_margin; /*<  Remaining thrust margin on the heaviest loaded motor*/
 float thrust_margin_omi; /*<  Estimated remaining thrust margin on the heaviest loaded motor, in case one motor becomes inoperative*/
 uint8_t state; /*<  */
} mavlink_aviant_indicator_mr_thrust_t;

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN 9
#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN 9
#define MAVLINK_MSG_ID_59003_LEN 9
#define MAVLINK_MSG_ID_59003_MIN_LEN 9

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC 26
#define MAVLINK_MSG_ID_59003_CRC 26



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_MR_THRUST { \
    59003, \
    "AVIANT_INDICATOR_MR_THRUST", \
    3, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_aviant_indicator_mr_thrust_t, state) }, \
         { "thrust_margin", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aviant_indicator_mr_thrust_t, thrust_margin) }, \
         { "thrust_margin_omi", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aviant_indicator_mr_thrust_t, thrust_margin_omi) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_MR_THRUST { \
    "AVIANT_INDICATOR_MR_THRUST", \
    3, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_aviant_indicator_mr_thrust_t, state) }, \
         { "thrust_margin", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aviant_indicator_mr_thrust_t, thrust_margin) }, \
         { "thrust_margin_omi", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aviant_indicator_mr_thrust_t, thrust_margin_omi) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_indicator_mr_thrust message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  
 * @param thrust_margin  Remaining thrust margin on the heaviest loaded motor
 * @param thrust_margin_omi  Estimated remaining thrust margin on the heaviest loaded motor, in case one motor becomes inoperative
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_mr_thrust_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, float thrust_margin, float thrust_margin_omi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN];
    _mav_put_float(buf, 0, thrust_margin);
    _mav_put_float(buf, 4, thrust_margin_omi);
    _mav_put_uint8_t(buf, 8, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#else
    mavlink_aviant_indicator_mr_thrust_t packet;
    packet.thrust_margin = thrust_margin;
    packet.thrust_margin_omi = thrust_margin_omi;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
}

/**
 * @brief Pack a aviant_indicator_mr_thrust message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  
 * @param thrust_margin  Remaining thrust margin on the heaviest loaded motor
 * @param thrust_margin_omi  Estimated remaining thrust margin on the heaviest loaded motor, in case one motor becomes inoperative
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_mr_thrust_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, float thrust_margin, float thrust_margin_omi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN];
    _mav_put_float(buf, 0, thrust_margin);
    _mav_put_float(buf, 4, thrust_margin_omi);
    _mav_put_uint8_t(buf, 8, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#else
    mavlink_aviant_indicator_mr_thrust_t packet;
    packet.thrust_margin = thrust_margin;
    packet.thrust_margin_omi = thrust_margin_omi;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#endif
}

/**
 * @brief Pack a aviant_indicator_mr_thrust message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  
 * @param thrust_margin  Remaining thrust margin on the heaviest loaded motor
 * @param thrust_margin_omi  Estimated remaining thrust margin on the heaviest loaded motor, in case one motor becomes inoperative
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_mr_thrust_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,float thrust_margin,float thrust_margin_omi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN];
    _mav_put_float(buf, 0, thrust_margin);
    _mav_put_float(buf, 4, thrust_margin_omi);
    _mav_put_uint8_t(buf, 8, state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#else
    mavlink_aviant_indicator_mr_thrust_t packet;
    packet.thrust_margin = thrust_margin;
    packet.thrust_margin_omi = thrust_margin_omi;
    packet.state = state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
}

/**
 * @brief Encode a aviant_indicator_mr_thrust struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_mr_thrust C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_mr_thrust_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_indicator_mr_thrust_t* aviant_indicator_mr_thrust)
{
    return mavlink_msg_aviant_indicator_mr_thrust_pack(system_id, component_id, msg, aviant_indicator_mr_thrust->state, aviant_indicator_mr_thrust->thrust_margin, aviant_indicator_mr_thrust->thrust_margin_omi);
}

/**
 * @brief Encode a aviant_indicator_mr_thrust struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_mr_thrust C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_mr_thrust_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_indicator_mr_thrust_t* aviant_indicator_mr_thrust)
{
    return mavlink_msg_aviant_indicator_mr_thrust_pack_chan(system_id, component_id, chan, msg, aviant_indicator_mr_thrust->state, aviant_indicator_mr_thrust->thrust_margin, aviant_indicator_mr_thrust->thrust_margin_omi);
}

/**
 * @brief Encode a aviant_indicator_mr_thrust struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_mr_thrust C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_mr_thrust_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_indicator_mr_thrust_t* aviant_indicator_mr_thrust)
{
    return mavlink_msg_aviant_indicator_mr_thrust_pack_status(system_id, component_id, _status, msg,  aviant_indicator_mr_thrust->state, aviant_indicator_mr_thrust->thrust_margin, aviant_indicator_mr_thrust->thrust_margin_omi);
}

/**
 * @brief Send a aviant_indicator_mr_thrust message
 * @param chan MAVLink channel to send the message
 *
 * @param state  
 * @param thrust_margin  Remaining thrust margin on the heaviest loaded motor
 * @param thrust_margin_omi  Estimated remaining thrust margin on the heaviest loaded motor, in case one motor becomes inoperative
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_indicator_mr_thrust_send(mavlink_channel_t chan, uint8_t state, float thrust_margin, float thrust_margin_omi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN];
    _mav_put_float(buf, 0, thrust_margin);
    _mav_put_float(buf, 4, thrust_margin_omi);
    _mav_put_uint8_t(buf, 8, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
#else
    mavlink_aviant_indicator_mr_thrust_t packet;
    packet.thrust_margin = thrust_margin;
    packet.thrust_margin_omi = thrust_margin_omi;
    packet.state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
#endif
}

/**
 * @brief Send a aviant_indicator_mr_thrust message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_indicator_mr_thrust_send_struct(mavlink_channel_t chan, const mavlink_aviant_indicator_mr_thrust_t* aviant_indicator_mr_thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_mr_thrust_send(chan, aviant_indicator_mr_thrust->state, aviant_indicator_mr_thrust->thrust_margin, aviant_indicator_mr_thrust->thrust_margin_omi);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST, (const char *)aviant_indicator_mr_thrust, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_indicator_mr_thrust_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, float thrust_margin, float thrust_margin_omi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, thrust_margin);
    _mav_put_float(buf, 4, thrust_margin_omi);
    _mav_put_uint8_t(buf, 8, state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
#else
    mavlink_aviant_indicator_mr_thrust_t *packet = (mavlink_aviant_indicator_mr_thrust_t *)msgbuf;
    packet->thrust_margin = thrust_margin;
    packet->thrust_margin_omi = thrust_margin_omi;
    packet->state = state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST, (const char *)packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_INDICATOR_MR_THRUST UNPACKING


/**
 * @brief Get field state from aviant_indicator_mr_thrust message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_aviant_indicator_mr_thrust_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field thrust_margin from aviant_indicator_mr_thrust message
 *
 * @return  Remaining thrust margin on the heaviest loaded motor
 */
static inline float mavlink_msg_aviant_indicator_mr_thrust_get_thrust_margin(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field thrust_margin_omi from aviant_indicator_mr_thrust message
 *
 * @return  Estimated remaining thrust margin on the heaviest loaded motor, in case one motor becomes inoperative
 */
static inline float mavlink_msg_aviant_indicator_mr_thrust_get_thrust_margin_omi(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a aviant_indicator_mr_thrust message into a struct
 *
 * @param msg The message to decode
 * @param aviant_indicator_mr_thrust C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_indicator_mr_thrust_decode(const mavlink_message_t* msg, mavlink_aviant_indicator_mr_thrust_t* aviant_indicator_mr_thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_indicator_mr_thrust->thrust_margin = mavlink_msg_aviant_indicator_mr_thrust_get_thrust_margin(msg);
    aviant_indicator_mr_thrust->thrust_margin_omi = mavlink_msg_aviant_indicator_mr_thrust_get_thrust_margin_omi(msg);
    aviant_indicator_mr_thrust->state = mavlink_msg_aviant_indicator_mr_thrust_get_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN;
        memset(aviant_indicator_mr_thrust, 0, MAVLINK_MSG_ID_AVIANT_INDICATOR_MR_THRUST_LEN);
    memcpy(aviant_indicator_mr_thrust, _MAV_PAYLOAD(msg), len);
#endif
}

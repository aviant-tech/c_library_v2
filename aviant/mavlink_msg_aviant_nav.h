#pragma once
// MESSAGE AVIANT_NAV PACKING

#define MAVLINK_MSG_ID_AVIANT_NAV 59002


typedef struct __mavlink_aviant_nav_t {
 uint8_t accuracy; /*<  Absolute position accuracy*/
 uint8_t redundancy; /*<  Navigation sensor redundancy*/
} mavlink_aviant_nav_t;

#define MAVLINK_MSG_ID_AVIANT_NAV_LEN 2
#define MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN 2
#define MAVLINK_MSG_ID_59002_LEN 2
#define MAVLINK_MSG_ID_59002_MIN_LEN 2

#define MAVLINK_MSG_ID_AVIANT_NAV_CRC 240
#define MAVLINK_MSG_ID_59002_CRC 240



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_NAV { \
    59002, \
    "AVIANT_NAV", \
    2, \
    {  { "accuracy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_aviant_nav_t, accuracy) }, \
         { "redundancy", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_aviant_nav_t, redundancy) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_NAV { \
    "AVIANT_NAV", \
    2, \
    {  { "accuracy", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_aviant_nav_t, accuracy) }, \
         { "redundancy", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_aviant_nav_t, redundancy) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_nav message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param accuracy  Absolute position accuracy
 * @param redundancy  Navigation sensor redundancy
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_nav_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t accuracy, uint8_t redundancy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_NAV_LEN];
    _mav_put_uint8_t(buf, 0, accuracy);
    _mav_put_uint8_t(buf, 1, redundancy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#else
    mavlink_aviant_nav_t packet;
    packet.accuracy = accuracy;
    packet.redundancy = redundancy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_NAV;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
}

/**
 * @brief Pack a aviant_nav message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param accuracy  Absolute position accuracy
 * @param redundancy  Navigation sensor redundancy
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_nav_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t accuracy, uint8_t redundancy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_NAV_LEN];
    _mav_put_uint8_t(buf, 0, accuracy);
    _mav_put_uint8_t(buf, 1, redundancy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#else
    mavlink_aviant_nav_t packet;
    packet.accuracy = accuracy;
    packet.redundancy = redundancy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_NAV;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#endif
}

/**
 * @brief Pack a aviant_nav message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param accuracy  Absolute position accuracy
 * @param redundancy  Navigation sensor redundancy
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_nav_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t accuracy,uint8_t redundancy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_NAV_LEN];
    _mav_put_uint8_t(buf, 0, accuracy);
    _mav_put_uint8_t(buf, 1, redundancy);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#else
    mavlink_aviant_nav_t packet;
    packet.accuracy = accuracy;
    packet.redundancy = redundancy;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_NAV;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
}

/**
 * @brief Encode a aviant_nav struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_nav C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_nav_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_nav_t* aviant_nav)
{
    return mavlink_msg_aviant_nav_pack(system_id, component_id, msg, aviant_nav->accuracy, aviant_nav->redundancy);
}

/**
 * @brief Encode a aviant_nav struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_nav C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_nav_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_nav_t* aviant_nav)
{
    return mavlink_msg_aviant_nav_pack_chan(system_id, component_id, chan, msg, aviant_nav->accuracy, aviant_nav->redundancy);
}

/**
 * @brief Encode a aviant_nav struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_nav C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_nav_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_nav_t* aviant_nav)
{
    return mavlink_msg_aviant_nav_pack_status(system_id, component_id, _status, msg,  aviant_nav->accuracy, aviant_nav->redundancy);
}

/**
 * @brief Send a aviant_nav message
 * @param chan MAVLink channel to send the message
 *
 * @param accuracy  Absolute position accuracy
 * @param redundancy  Navigation sensor redundancy
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_nav_send(mavlink_channel_t chan, uint8_t accuracy, uint8_t redundancy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_NAV_LEN];
    _mav_put_uint8_t(buf, 0, accuracy);
    _mav_put_uint8_t(buf, 1, redundancy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_NAV, buf, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
#else
    mavlink_aviant_nav_t packet;
    packet.accuracy = accuracy;
    packet.redundancy = redundancy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_NAV, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
#endif
}

/**
 * @brief Send a aviant_nav message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_nav_send_struct(mavlink_channel_t chan, const mavlink_aviant_nav_t* aviant_nav)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_nav_send(chan, aviant_nav->accuracy, aviant_nav->redundancy);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_NAV, (const char *)aviant_nav, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_NAV_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_nav_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t accuracy, uint8_t redundancy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, accuracy);
    _mav_put_uint8_t(buf, 1, redundancy);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_NAV, buf, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
#else
    mavlink_aviant_nav_t *packet = (mavlink_aviant_nav_t *)msgbuf;
    packet->accuracy = accuracy;
    packet->redundancy = redundancy;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_NAV, (const char *)packet, MAVLINK_MSG_ID_AVIANT_NAV_MIN_LEN, MAVLINK_MSG_ID_AVIANT_NAV_LEN, MAVLINK_MSG_ID_AVIANT_NAV_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_NAV UNPACKING


/**
 * @brief Get field accuracy from aviant_nav message
 *
 * @return  Absolute position accuracy
 */
static inline uint8_t mavlink_msg_aviant_nav_get_accuracy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field redundancy from aviant_nav message
 *
 * @return  Navigation sensor redundancy
 */
static inline uint8_t mavlink_msg_aviant_nav_get_redundancy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a aviant_nav message into a struct
 *
 * @param msg The message to decode
 * @param aviant_nav C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_nav_decode(const mavlink_message_t* msg, mavlink_aviant_nav_t* aviant_nav)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_nav->accuracy = mavlink_msg_aviant_nav_get_accuracy(msg);
    aviant_nav->redundancy = mavlink_msg_aviant_nav_get_redundancy(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_NAV_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_NAV_LEN;
        memset(aviant_nav, 0, MAVLINK_MSG_ID_AVIANT_NAV_LEN);
    memcpy(aviant_nav, _MAV_PAYLOAD(msg), len);
#endif
}

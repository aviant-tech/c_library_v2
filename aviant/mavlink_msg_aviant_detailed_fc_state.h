#pragma once
// MESSAGE AVIANT_DETAILED_FC_STATE PACKING

#define MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE 59025


typedef struct __mavlink_aviant_detailed_fc_state_t {
 uint64_t time_unix_usec; /*< [us] Timestamp (UNIX epoch time).*/
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 uint8_t armed; /*<  Is the aircraft armed?*/
 uint8_t flight_termination; /*<  Is the aircraft in flight termination?*/
} mavlink_aviant_detailed_fc_state_t;

#define MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN 14
#define MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN 14
#define MAVLINK_MSG_ID_59025_LEN 14
#define MAVLINK_MSG_ID_59025_MIN_LEN 14

#define MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC 199
#define MAVLINK_MSG_ID_59025_CRC 199



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_DETAILED_FC_STATE { \
    59025, \
    "AVIANT_DETAILED_FC_STATE", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_aviant_detailed_fc_state_t, time_boot_ms) }, \
         { "time_unix_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aviant_detailed_fc_state_t, time_unix_usec) }, \
         { "armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_aviant_detailed_fc_state_t, armed) }, \
         { "flight_termination", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_aviant_detailed_fc_state_t, flight_termination) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_DETAILED_FC_STATE { \
    "AVIANT_DETAILED_FC_STATE", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_aviant_detailed_fc_state_t, time_boot_ms) }, \
         { "time_unix_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aviant_detailed_fc_state_t, time_unix_usec) }, \
         { "armed", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_aviant_detailed_fc_state_t, armed) }, \
         { "flight_termination", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_aviant_detailed_fc_state_t, flight_termination) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_detailed_fc_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param time_unix_usec [us] Timestamp (UNIX epoch time).
 * @param armed  Is the aircraft armed?
 * @param flight_termination  Is the aircraft in flight termination?
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_detailed_fc_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint64_t time_unix_usec, uint8_t armed, uint8_t flight_termination)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_unix_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_uint8_t(buf, 12, armed);
    _mav_put_uint8_t(buf, 13, flight_termination);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#else
    mavlink_aviant_detailed_fc_state_t packet;
    packet.time_unix_usec = time_unix_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.armed = armed;
    packet.flight_termination = flight_termination;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
}

/**
 * @brief Pack a aviant_detailed_fc_state message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param time_unix_usec [us] Timestamp (UNIX epoch time).
 * @param armed  Is the aircraft armed?
 * @param flight_termination  Is the aircraft in flight termination?
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_detailed_fc_state_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint64_t time_unix_usec, uint8_t armed, uint8_t flight_termination)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_unix_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_uint8_t(buf, 12, armed);
    _mav_put_uint8_t(buf, 13, flight_termination);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#else
    mavlink_aviant_detailed_fc_state_t packet;
    packet.time_unix_usec = time_unix_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.armed = armed;
    packet.flight_termination = flight_termination;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#endif
}

/**
 * @brief Pack a aviant_detailed_fc_state message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param time_unix_usec [us] Timestamp (UNIX epoch time).
 * @param armed  Is the aircraft armed?
 * @param flight_termination  Is the aircraft in flight termination?
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_detailed_fc_state_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint64_t time_unix_usec,uint8_t armed,uint8_t flight_termination)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_unix_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_uint8_t(buf, 12, armed);
    _mav_put_uint8_t(buf, 13, flight_termination);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#else
    mavlink_aviant_detailed_fc_state_t packet;
    packet.time_unix_usec = time_unix_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.armed = armed;
    packet.flight_termination = flight_termination;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
}

/**
 * @brief Encode a aviant_detailed_fc_state struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_detailed_fc_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_detailed_fc_state_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_detailed_fc_state_t* aviant_detailed_fc_state)
{
    return mavlink_msg_aviant_detailed_fc_state_pack(system_id, component_id, msg, aviant_detailed_fc_state->time_boot_ms, aviant_detailed_fc_state->time_unix_usec, aviant_detailed_fc_state->armed, aviant_detailed_fc_state->flight_termination);
}

/**
 * @brief Encode a aviant_detailed_fc_state struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_detailed_fc_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_detailed_fc_state_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_detailed_fc_state_t* aviant_detailed_fc_state)
{
    return mavlink_msg_aviant_detailed_fc_state_pack_chan(system_id, component_id, chan, msg, aviant_detailed_fc_state->time_boot_ms, aviant_detailed_fc_state->time_unix_usec, aviant_detailed_fc_state->armed, aviant_detailed_fc_state->flight_termination);
}

/**
 * @brief Encode a aviant_detailed_fc_state struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_detailed_fc_state C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_detailed_fc_state_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_detailed_fc_state_t* aviant_detailed_fc_state)
{
    return mavlink_msg_aviant_detailed_fc_state_pack_status(system_id, component_id, _status, msg,  aviant_detailed_fc_state->time_boot_ms, aviant_detailed_fc_state->time_unix_usec, aviant_detailed_fc_state->armed, aviant_detailed_fc_state->flight_termination);
}

/**
 * @brief Send a aviant_detailed_fc_state message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param time_unix_usec [us] Timestamp (UNIX epoch time).
 * @param armed  Is the aircraft armed?
 * @param flight_termination  Is the aircraft in flight termination?
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_detailed_fc_state_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint64_t time_unix_usec, uint8_t armed, uint8_t flight_termination)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN];
    _mav_put_uint64_t(buf, 0, time_unix_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_uint8_t(buf, 12, armed);
    _mav_put_uint8_t(buf, 13, flight_termination);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE, buf, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
#else
    mavlink_aviant_detailed_fc_state_t packet;
    packet.time_unix_usec = time_unix_usec;
    packet.time_boot_ms = time_boot_ms;
    packet.armed = armed;
    packet.flight_termination = flight_termination;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
#endif
}

/**
 * @brief Send a aviant_detailed_fc_state message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_detailed_fc_state_send_struct(mavlink_channel_t chan, const mavlink_aviant_detailed_fc_state_t* aviant_detailed_fc_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_detailed_fc_state_send(chan, aviant_detailed_fc_state->time_boot_ms, aviant_detailed_fc_state->time_unix_usec, aviant_detailed_fc_state->armed, aviant_detailed_fc_state->flight_termination);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE, (const char *)aviant_detailed_fc_state, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_detailed_fc_state_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint64_t time_unix_usec, uint8_t armed, uint8_t flight_termination)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_unix_usec);
    _mav_put_uint32_t(buf, 8, time_boot_ms);
    _mav_put_uint8_t(buf, 12, armed);
    _mav_put_uint8_t(buf, 13, flight_termination);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE, buf, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
#else
    mavlink_aviant_detailed_fc_state_t *packet = (mavlink_aviant_detailed_fc_state_t *)msgbuf;
    packet->time_unix_usec = time_unix_usec;
    packet->time_boot_ms = time_boot_ms;
    packet->armed = armed;
    packet->flight_termination = flight_termination;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE, (const char *)packet, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_MIN_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_DETAILED_FC_STATE UNPACKING


/**
 * @brief Get field time_boot_ms from aviant_detailed_fc_state message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_aviant_detailed_fc_state_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field time_unix_usec from aviant_detailed_fc_state message
 *
 * @return [us] Timestamp (UNIX epoch time).
 */
static inline uint64_t mavlink_msg_aviant_detailed_fc_state_get_time_unix_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field armed from aviant_detailed_fc_state message
 *
 * @return  Is the aircraft armed?
 */
static inline uint8_t mavlink_msg_aviant_detailed_fc_state_get_armed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field flight_termination from aviant_detailed_fc_state message
 *
 * @return  Is the aircraft in flight termination?
 */
static inline uint8_t mavlink_msg_aviant_detailed_fc_state_get_flight_termination(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Decode a aviant_detailed_fc_state message into a struct
 *
 * @param msg The message to decode
 * @param aviant_detailed_fc_state C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_detailed_fc_state_decode(const mavlink_message_t* msg, mavlink_aviant_detailed_fc_state_t* aviant_detailed_fc_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_detailed_fc_state->time_unix_usec = mavlink_msg_aviant_detailed_fc_state_get_time_unix_usec(msg);
    aviant_detailed_fc_state->time_boot_ms = mavlink_msg_aviant_detailed_fc_state_get_time_boot_ms(msg);
    aviant_detailed_fc_state->armed = mavlink_msg_aviant_detailed_fc_state_get_armed(msg);
    aviant_detailed_fc_state->flight_termination = mavlink_msg_aviant_detailed_fc_state_get_flight_termination(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN;
        memset(aviant_detailed_fc_state, 0, MAVLINK_MSG_ID_AVIANT_DETAILED_FC_STATE_LEN);
    memcpy(aviant_detailed_fc_state, _MAV_PAYLOAD(msg), len);
#endif
}

#pragma once
// MESSAGE AVIANT_INDICATOR_MOTORS PACKING

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS 59003


typedef struct __mavlink_aviant_indicator_motors_t {
 int16_t mot_voltage_cv[12]; /*< [cV] Motor voltages in centivolt*/
 int16_t anomalous_current_ca; /*< [cA] Anomalous current in centiamps*/
 uint8_t mot_load_status[12]; /*<  Motor load status per motor*/
 uint8_t anomalous_current_status; /*<  Anomalous current status*/
} mavlink_aviant_indicator_motors_t;

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN 39
#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN 39
#define MAVLINK_MSG_ID_59003_LEN 39
#define MAVLINK_MSG_ID_59003_MIN_LEN 39

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC 60
#define MAVLINK_MSG_ID_59003_CRC 60

#define MAVLINK_MSG_AVIANT_INDICATOR_MOTORS_FIELD_MOT_VOLTAGE_CV_LEN 12
#define MAVLINK_MSG_AVIANT_INDICATOR_MOTORS_FIELD_MOT_LOAD_STATUS_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_MOTORS { \
    59003, \
    "AVIANT_INDICATOR_MOTORS", \
    4, \
    {  { "mot_voltage_cv", NULL, MAVLINK_TYPE_INT16_T, 12, 0, offsetof(mavlink_aviant_indicator_motors_t, mot_voltage_cv) }, \
         { "mot_load_status", NULL, MAVLINK_TYPE_UINT8_T, 12, 26, offsetof(mavlink_aviant_indicator_motors_t, mot_load_status) }, \
         { "anomalous_current_ca", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_aviant_indicator_motors_t, anomalous_current_ca) }, \
         { "anomalous_current_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_aviant_indicator_motors_t, anomalous_current_status) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_MOTORS { \
    "AVIANT_INDICATOR_MOTORS", \
    4, \
    {  { "mot_voltage_cv", NULL, MAVLINK_TYPE_INT16_T, 12, 0, offsetof(mavlink_aviant_indicator_motors_t, mot_voltage_cv) }, \
         { "mot_load_status", NULL, MAVLINK_TYPE_UINT8_T, 12, 26, offsetof(mavlink_aviant_indicator_motors_t, mot_load_status) }, \
         { "anomalous_current_ca", NULL, MAVLINK_TYPE_INT16_T, 0, 24, offsetof(mavlink_aviant_indicator_motors_t, anomalous_current_ca) }, \
         { "anomalous_current_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_aviant_indicator_motors_t, anomalous_current_status) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_indicator_motors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mot_voltage_cv [cV] Motor voltages in centivolt
 * @param mot_load_status  Motor load status per motor
 * @param anomalous_current_ca [cA] Anomalous current in centiamps
 * @param anomalous_current_status  Anomalous current status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const int16_t *mot_voltage_cv, const uint8_t *mot_load_status, int16_t anomalous_current_ca, uint8_t anomalous_current_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN];
    _mav_put_int16_t(buf, 24, anomalous_current_ca);
    _mav_put_uint8_t(buf, 38, anomalous_current_status);
    _mav_put_int16_t_array(buf, 0, mot_voltage_cv, 12);
    _mav_put_uint8_t_array(buf, 26, mot_load_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#else
    mavlink_aviant_indicator_motors_t packet;
    packet.anomalous_current_ca = anomalous_current_ca;
    packet.anomalous_current_status = anomalous_current_status;
    mav_array_memcpy(packet.mot_voltage_cv, mot_voltage_cv, sizeof(int16_t)*12);
    mav_array_memcpy(packet.mot_load_status, mot_load_status, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
}

/**
 * @brief Pack a aviant_indicator_motors message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param mot_voltage_cv [cV] Motor voltages in centivolt
 * @param mot_load_status  Motor load status per motor
 * @param anomalous_current_ca [cA] Anomalous current in centiamps
 * @param anomalous_current_status  Anomalous current status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               const int16_t *mot_voltage_cv, const uint8_t *mot_load_status, int16_t anomalous_current_ca, uint8_t anomalous_current_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN];
    _mav_put_int16_t(buf, 24, anomalous_current_ca);
    _mav_put_uint8_t(buf, 38, anomalous_current_status);
    _mav_put_int16_t_array(buf, 0, mot_voltage_cv, 12);
    _mav_put_uint8_t_array(buf, 26, mot_load_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#else
    mavlink_aviant_indicator_motors_t packet;
    packet.anomalous_current_ca = anomalous_current_ca;
    packet.anomalous_current_status = anomalous_current_status;
    mav_array_memcpy(packet.mot_voltage_cv, mot_voltage_cv, sizeof(int16_t)*12);
    mav_array_memcpy(packet.mot_load_status, mot_load_status, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#endif
}

/**
 * @brief Pack a aviant_indicator_motors message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mot_voltage_cv [cV] Motor voltages in centivolt
 * @param mot_load_status  Motor load status per motor
 * @param anomalous_current_ca [cA] Anomalous current in centiamps
 * @param anomalous_current_status  Anomalous current status
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const int16_t *mot_voltage_cv,const uint8_t *mot_load_status,int16_t anomalous_current_ca,uint8_t anomalous_current_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN];
    _mav_put_int16_t(buf, 24, anomalous_current_ca);
    _mav_put_uint8_t(buf, 38, anomalous_current_status);
    _mav_put_int16_t_array(buf, 0, mot_voltage_cv, 12);
    _mav_put_uint8_t_array(buf, 26, mot_load_status, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#else
    mavlink_aviant_indicator_motors_t packet;
    packet.anomalous_current_ca = anomalous_current_ca;
    packet.anomalous_current_status = anomalous_current_status;
    mav_array_memcpy(packet.mot_voltage_cv, mot_voltage_cv, sizeof(int16_t)*12);
    mav_array_memcpy(packet.mot_load_status, mot_load_status, sizeof(uint8_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
}

/**
 * @brief Encode a aviant_indicator_motors struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_motors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_indicator_motors_t* aviant_indicator_motors)
{
    return mavlink_msg_aviant_indicator_motors_pack(system_id, component_id, msg, aviant_indicator_motors->mot_voltage_cv, aviant_indicator_motors->mot_load_status, aviant_indicator_motors->anomalous_current_ca, aviant_indicator_motors->anomalous_current_status);
}

/**
 * @brief Encode a aviant_indicator_motors struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_motors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_indicator_motors_t* aviant_indicator_motors)
{
    return mavlink_msg_aviant_indicator_motors_pack_chan(system_id, component_id, chan, msg, aviant_indicator_motors->mot_voltage_cv, aviant_indicator_motors->mot_load_status, aviant_indicator_motors->anomalous_current_ca, aviant_indicator_motors->anomalous_current_status);
}

/**
 * @brief Encode a aviant_indicator_motors struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_motors C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_indicator_motors_t* aviant_indicator_motors)
{
    return mavlink_msg_aviant_indicator_motors_pack_status(system_id, component_id, _status, msg,  aviant_indicator_motors->mot_voltage_cv, aviant_indicator_motors->mot_load_status, aviant_indicator_motors->anomalous_current_ca, aviant_indicator_motors->anomalous_current_status);
}

/**
 * @brief Send a aviant_indicator_motors message
 * @param chan MAVLink channel to send the message
 *
 * @param mot_voltage_cv [cV] Motor voltages in centivolt
 * @param mot_load_status  Motor load status per motor
 * @param anomalous_current_ca [cA] Anomalous current in centiamps
 * @param anomalous_current_status  Anomalous current status
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_indicator_motors_send(mavlink_channel_t chan, const int16_t *mot_voltage_cv, const uint8_t *mot_load_status, int16_t anomalous_current_ca, uint8_t anomalous_current_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN];
    _mav_put_int16_t(buf, 24, anomalous_current_ca);
    _mav_put_uint8_t(buf, 38, anomalous_current_status);
    _mav_put_int16_t_array(buf, 0, mot_voltage_cv, 12);
    _mav_put_uint8_t_array(buf, 26, mot_load_status, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
#else
    mavlink_aviant_indicator_motors_t packet;
    packet.anomalous_current_ca = anomalous_current_ca;
    packet.anomalous_current_status = anomalous_current_status;
    mav_array_memcpy(packet.mot_voltage_cv, mot_voltage_cv, sizeof(int16_t)*12);
    mav_array_memcpy(packet.mot_load_status, mot_load_status, sizeof(uint8_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
#endif
}

/**
 * @brief Send a aviant_indicator_motors message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_indicator_motors_send_struct(mavlink_channel_t chan, const mavlink_aviant_indicator_motors_t* aviant_indicator_motors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_motors_send(chan, aviant_indicator_motors->mot_voltage_cv, aviant_indicator_motors->mot_load_status, aviant_indicator_motors->anomalous_current_ca, aviant_indicator_motors->anomalous_current_status);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS, (const char *)aviant_indicator_motors, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_indicator_motors_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const int16_t *mot_voltage_cv, const uint8_t *mot_load_status, int16_t anomalous_current_ca, uint8_t anomalous_current_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 24, anomalous_current_ca);
    _mav_put_uint8_t(buf, 38, anomalous_current_status);
    _mav_put_int16_t_array(buf, 0, mot_voltage_cv, 12);
    _mav_put_uint8_t_array(buf, 26, mot_load_status, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
#else
    mavlink_aviant_indicator_motors_t *packet = (mavlink_aviant_indicator_motors_t *)msgbuf;
    packet->anomalous_current_ca = anomalous_current_ca;
    packet->anomalous_current_status = anomalous_current_status;
    mav_array_memcpy(packet->mot_voltage_cv, mot_voltage_cv, sizeof(int16_t)*12);
    mav_array_memcpy(packet->mot_load_status, mot_load_status, sizeof(uint8_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS, (const char *)packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_INDICATOR_MOTORS UNPACKING


/**
 * @brief Get field mot_voltage_cv from aviant_indicator_motors message
 *
 * @return [cV] Motor voltages in centivolt
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_get_mot_voltage_cv(const mavlink_message_t* msg, int16_t *mot_voltage_cv)
{
    return _MAV_RETURN_int16_t_array(msg, mot_voltage_cv, 12,  0);
}

/**
 * @brief Get field mot_load_status from aviant_indicator_motors message
 *
 * @return  Motor load status per motor
 */
static inline uint16_t mavlink_msg_aviant_indicator_motors_get_mot_load_status(const mavlink_message_t* msg, uint8_t *mot_load_status)
{
    return _MAV_RETURN_uint8_t_array(msg, mot_load_status, 12,  26);
}

/**
 * @brief Get field anomalous_current_ca from aviant_indicator_motors message
 *
 * @return [cA] Anomalous current in centiamps
 */
static inline int16_t mavlink_msg_aviant_indicator_motors_get_anomalous_current_ca(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  24);
}

/**
 * @brief Get field anomalous_current_status from aviant_indicator_motors message
 *
 * @return  Anomalous current status
 */
static inline uint8_t mavlink_msg_aviant_indicator_motors_get_anomalous_current_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Decode a aviant_indicator_motors message into a struct
 *
 * @param msg The message to decode
 * @param aviant_indicator_motors C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_indicator_motors_decode(const mavlink_message_t* msg, mavlink_aviant_indicator_motors_t* aviant_indicator_motors)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_motors_get_mot_voltage_cv(msg, aviant_indicator_motors->mot_voltage_cv);
    aviant_indicator_motors->anomalous_current_ca = mavlink_msg_aviant_indicator_motors_get_anomalous_current_ca(msg);
    mavlink_msg_aviant_indicator_motors_get_mot_load_status(msg, aviant_indicator_motors->mot_load_status);
    aviant_indicator_motors->anomalous_current_status = mavlink_msg_aviant_indicator_motors_get_anomalous_current_status(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN;
        memset(aviant_indicator_motors, 0, MAVLINK_MSG_ID_AVIANT_INDICATOR_MOTORS_LEN);
    memcpy(aviant_indicator_motors, _MAV_PAYLOAD(msg), len);
#endif
}

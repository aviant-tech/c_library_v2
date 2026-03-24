#pragma once
// MESSAGE AVIANT_INDICATOR_C2_LINK PACKING

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK 59007


typedef struct __mavlink_aviant_indicator_c2_link_t {
 uint32_t bytes_sent; /*< [bytes] Cumulative bytes sent*/
 uint32_t bytes_recv; /*< [bytes] Cumulative bytes received*/
 int16_t rsrp_dbm; /*< [dBm] Reference Signal Received Power*/
 uint8_t state; /*<  Overall C2 link status*/
 int8_t rsrq_db; /*< [dB] Reference Signal Received Quality*/
 int8_t sinr_db; /*< [dB] Signal to Interference plus Noise Ratio*/
 char default_interface[16]; /*<  Default network interface name*/
 char operator_name[16]; /*<  Network operator name*/
 uint8_t freq_band; /*<  LTE frequency band indicator*/
} mavlink_aviant_indicator_c2_link_t;

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN 46
#define MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN 46
#define MAVLINK_MSG_ID_59007_LEN 46
#define MAVLINK_MSG_ID_59007_MIN_LEN 46

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC 83
#define MAVLINK_MSG_ID_59007_CRC 83

#define MAVLINK_MSG_AVIANT_INDICATOR_C2_LINK_FIELD_DEFAULT_INTERFACE_LEN 16
#define MAVLINK_MSG_AVIANT_INDICATOR_C2_LINK_FIELD_OPERATOR_NAME_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_C2_LINK { \
    59007, \
    "AVIANT_INDICATOR_C2_LINK", \
    9, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_aviant_indicator_c2_link_t, state) }, \
         { "rsrp_dbm", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_aviant_indicator_c2_link_t, rsrp_dbm) }, \
         { "rsrq_db", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_aviant_indicator_c2_link_t, rsrq_db) }, \
         { "sinr_db", NULL, MAVLINK_TYPE_INT8_T, 0, 12, offsetof(mavlink_aviant_indicator_c2_link_t, sinr_db) }, \
         { "default_interface", NULL, MAVLINK_TYPE_CHAR, 16, 13, offsetof(mavlink_aviant_indicator_c2_link_t, default_interface) }, \
         { "operator_name", NULL, MAVLINK_TYPE_CHAR, 16, 29, offsetof(mavlink_aviant_indicator_c2_link_t, operator_name) }, \
         { "freq_band", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_aviant_indicator_c2_link_t, freq_band) }, \
         { "bytes_sent", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_aviant_indicator_c2_link_t, bytes_sent) }, \
         { "bytes_recv", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_aviant_indicator_c2_link_t, bytes_recv) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_C2_LINK { \
    "AVIANT_INDICATOR_C2_LINK", \
    9, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_aviant_indicator_c2_link_t, state) }, \
         { "rsrp_dbm", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_aviant_indicator_c2_link_t, rsrp_dbm) }, \
         { "rsrq_db", NULL, MAVLINK_TYPE_INT8_T, 0, 11, offsetof(mavlink_aviant_indicator_c2_link_t, rsrq_db) }, \
         { "sinr_db", NULL, MAVLINK_TYPE_INT8_T, 0, 12, offsetof(mavlink_aviant_indicator_c2_link_t, sinr_db) }, \
         { "default_interface", NULL, MAVLINK_TYPE_CHAR, 16, 13, offsetof(mavlink_aviant_indicator_c2_link_t, default_interface) }, \
         { "operator_name", NULL, MAVLINK_TYPE_CHAR, 16, 29, offsetof(mavlink_aviant_indicator_c2_link_t, operator_name) }, \
         { "freq_band", NULL, MAVLINK_TYPE_UINT8_T, 0, 45, offsetof(mavlink_aviant_indicator_c2_link_t, freq_band) }, \
         { "bytes_sent", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_aviant_indicator_c2_link_t, bytes_sent) }, \
         { "bytes_recv", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_aviant_indicator_c2_link_t, bytes_recv) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_indicator_c2_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Overall C2 link status
 * @param rsrp_dbm [dBm] Reference Signal Received Power
 * @param rsrq_db [dB] Reference Signal Received Quality
 * @param sinr_db [dB] Signal to Interference plus Noise Ratio
 * @param default_interface  Default network interface name
 * @param operator_name  Network operator name
 * @param freq_band  LTE frequency band indicator
 * @param bytes_sent [bytes] Cumulative bytes sent
 * @param bytes_recv [bytes] Cumulative bytes received
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, int16_t rsrp_dbm, int8_t rsrq_db, int8_t sinr_db, const char *default_interface, const char *operator_name, uint8_t freq_band, uint32_t bytes_sent, uint32_t bytes_recv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN];
    _mav_put_uint32_t(buf, 0, bytes_sent);
    _mav_put_uint32_t(buf, 4, bytes_recv);
    _mav_put_int16_t(buf, 8, rsrp_dbm);
    _mav_put_uint8_t(buf, 10, state);
    _mav_put_int8_t(buf, 11, rsrq_db);
    _mav_put_int8_t(buf, 12, sinr_db);
    _mav_put_uint8_t(buf, 45, freq_band);
    _mav_put_char_array(buf, 13, default_interface, 16);
    _mav_put_char_array(buf, 29, operator_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#else
    mavlink_aviant_indicator_c2_link_t packet;
    packet.bytes_sent = bytes_sent;
    packet.bytes_recv = bytes_recv;
    packet.rsrp_dbm = rsrp_dbm;
    packet.state = state;
    packet.rsrq_db = rsrq_db;
    packet.sinr_db = sinr_db;
    packet.freq_band = freq_band;
    mav_array_memcpy(packet.default_interface, default_interface, sizeof(char)*16);
    mav_array_memcpy(packet.operator_name, operator_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
}

/**
 * @brief Pack a aviant_indicator_c2_link message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  Overall C2 link status
 * @param rsrp_dbm [dBm] Reference Signal Received Power
 * @param rsrq_db [dB] Reference Signal Received Quality
 * @param sinr_db [dB] Signal to Interference plus Noise Ratio
 * @param default_interface  Default network interface name
 * @param operator_name  Network operator name
 * @param freq_band  LTE frequency band indicator
 * @param bytes_sent [bytes] Cumulative bytes sent
 * @param bytes_recv [bytes] Cumulative bytes received
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, int16_t rsrp_dbm, int8_t rsrq_db, int8_t sinr_db, const char *default_interface, const char *operator_name, uint8_t freq_band, uint32_t bytes_sent, uint32_t bytes_recv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN];
    _mav_put_uint32_t(buf, 0, bytes_sent);
    _mav_put_uint32_t(buf, 4, bytes_recv);
    _mav_put_int16_t(buf, 8, rsrp_dbm);
    _mav_put_uint8_t(buf, 10, state);
    _mav_put_int8_t(buf, 11, rsrq_db);
    _mav_put_int8_t(buf, 12, sinr_db);
    _mav_put_uint8_t(buf, 45, freq_band);
    _mav_put_char_array(buf, 13, default_interface, 16);
    _mav_put_char_array(buf, 29, operator_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#else
    mavlink_aviant_indicator_c2_link_t packet;
    packet.bytes_sent = bytes_sent;
    packet.bytes_recv = bytes_recv;
    packet.rsrp_dbm = rsrp_dbm;
    packet.state = state;
    packet.rsrq_db = rsrq_db;
    packet.sinr_db = sinr_db;
    packet.freq_band = freq_band;
    mav_array_memcpy(packet.default_interface, default_interface, sizeof(char)*16);
    mav_array_memcpy(packet.operator_name, operator_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#endif
}

/**
 * @brief Pack a aviant_indicator_c2_link message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  Overall C2 link status
 * @param rsrp_dbm [dBm] Reference Signal Received Power
 * @param rsrq_db [dB] Reference Signal Received Quality
 * @param sinr_db [dB] Signal to Interference plus Noise Ratio
 * @param default_interface  Default network interface name
 * @param operator_name  Network operator name
 * @param freq_band  LTE frequency band indicator
 * @param bytes_sent [bytes] Cumulative bytes sent
 * @param bytes_recv [bytes] Cumulative bytes received
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,int16_t rsrp_dbm,int8_t rsrq_db,int8_t sinr_db,const char *default_interface,const char *operator_name,uint8_t freq_band,uint32_t bytes_sent,uint32_t bytes_recv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN];
    _mav_put_uint32_t(buf, 0, bytes_sent);
    _mav_put_uint32_t(buf, 4, bytes_recv);
    _mav_put_int16_t(buf, 8, rsrp_dbm);
    _mav_put_uint8_t(buf, 10, state);
    _mav_put_int8_t(buf, 11, rsrq_db);
    _mav_put_int8_t(buf, 12, sinr_db);
    _mav_put_uint8_t(buf, 45, freq_band);
    _mav_put_char_array(buf, 13, default_interface, 16);
    _mav_put_char_array(buf, 29, operator_name, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#else
    mavlink_aviant_indicator_c2_link_t packet;
    packet.bytes_sent = bytes_sent;
    packet.bytes_recv = bytes_recv;
    packet.rsrp_dbm = rsrp_dbm;
    packet.state = state;
    packet.rsrq_db = rsrq_db;
    packet.sinr_db = sinr_db;
    packet.freq_band = freq_band;
    mav_array_memcpy(packet.default_interface, default_interface, sizeof(char)*16);
    mav_array_memcpy(packet.operator_name, operator_name, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
}

/**
 * @brief Encode a aviant_indicator_c2_link struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_c2_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_indicator_c2_link_t* aviant_indicator_c2_link)
{
    return mavlink_msg_aviant_indicator_c2_link_pack(system_id, component_id, msg, aviant_indicator_c2_link->state, aviant_indicator_c2_link->rsrp_dbm, aviant_indicator_c2_link->rsrq_db, aviant_indicator_c2_link->sinr_db, aviant_indicator_c2_link->default_interface, aviant_indicator_c2_link->operator_name, aviant_indicator_c2_link->freq_band, aviant_indicator_c2_link->bytes_sent, aviant_indicator_c2_link->bytes_recv);
}

/**
 * @brief Encode a aviant_indicator_c2_link struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_c2_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_indicator_c2_link_t* aviant_indicator_c2_link)
{
    return mavlink_msg_aviant_indicator_c2_link_pack_chan(system_id, component_id, chan, msg, aviant_indicator_c2_link->state, aviant_indicator_c2_link->rsrp_dbm, aviant_indicator_c2_link->rsrq_db, aviant_indicator_c2_link->sinr_db, aviant_indicator_c2_link->default_interface, aviant_indicator_c2_link->operator_name, aviant_indicator_c2_link->freq_band, aviant_indicator_c2_link->bytes_sent, aviant_indicator_c2_link->bytes_recv);
}

/**
 * @brief Encode a aviant_indicator_c2_link struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_c2_link C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_indicator_c2_link_t* aviant_indicator_c2_link)
{
    return mavlink_msg_aviant_indicator_c2_link_pack_status(system_id, component_id, _status, msg,  aviant_indicator_c2_link->state, aviant_indicator_c2_link->rsrp_dbm, aviant_indicator_c2_link->rsrq_db, aviant_indicator_c2_link->sinr_db, aviant_indicator_c2_link->default_interface, aviant_indicator_c2_link->operator_name, aviant_indicator_c2_link->freq_band, aviant_indicator_c2_link->bytes_sent, aviant_indicator_c2_link->bytes_recv);
}

/**
 * @brief Send a aviant_indicator_c2_link message
 * @param chan MAVLink channel to send the message
 *
 * @param state  Overall C2 link status
 * @param rsrp_dbm [dBm] Reference Signal Received Power
 * @param rsrq_db [dB] Reference Signal Received Quality
 * @param sinr_db [dB] Signal to Interference plus Noise Ratio
 * @param default_interface  Default network interface name
 * @param operator_name  Network operator name
 * @param freq_band  LTE frequency band indicator
 * @param bytes_sent [bytes] Cumulative bytes sent
 * @param bytes_recv [bytes] Cumulative bytes received
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_indicator_c2_link_send(mavlink_channel_t chan, uint8_t state, int16_t rsrp_dbm, int8_t rsrq_db, int8_t sinr_db, const char *default_interface, const char *operator_name, uint8_t freq_band, uint32_t bytes_sent, uint32_t bytes_recv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN];
    _mav_put_uint32_t(buf, 0, bytes_sent);
    _mav_put_uint32_t(buf, 4, bytes_recv);
    _mav_put_int16_t(buf, 8, rsrp_dbm);
    _mav_put_uint8_t(buf, 10, state);
    _mav_put_int8_t(buf, 11, rsrq_db);
    _mav_put_int8_t(buf, 12, sinr_db);
    _mav_put_uint8_t(buf, 45, freq_band);
    _mav_put_char_array(buf, 13, default_interface, 16);
    _mav_put_char_array(buf, 29, operator_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
#else
    mavlink_aviant_indicator_c2_link_t packet;
    packet.bytes_sent = bytes_sent;
    packet.bytes_recv = bytes_recv;
    packet.rsrp_dbm = rsrp_dbm;
    packet.state = state;
    packet.rsrq_db = rsrq_db;
    packet.sinr_db = sinr_db;
    packet.freq_band = freq_band;
    mav_array_memcpy(packet.default_interface, default_interface, sizeof(char)*16);
    mav_array_memcpy(packet.operator_name, operator_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
#endif
}

/**
 * @brief Send a aviant_indicator_c2_link message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_indicator_c2_link_send_struct(mavlink_channel_t chan, const mavlink_aviant_indicator_c2_link_t* aviant_indicator_c2_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_c2_link_send(chan, aviant_indicator_c2_link->state, aviant_indicator_c2_link->rsrp_dbm, aviant_indicator_c2_link->rsrq_db, aviant_indicator_c2_link->sinr_db, aviant_indicator_c2_link->default_interface, aviant_indicator_c2_link->operator_name, aviant_indicator_c2_link->freq_band, aviant_indicator_c2_link->bytes_sent, aviant_indicator_c2_link->bytes_recv);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK, (const char *)aviant_indicator_c2_link, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_indicator_c2_link_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, int16_t rsrp_dbm, int8_t rsrq_db, int8_t sinr_db, const char *default_interface, const char *operator_name, uint8_t freq_band, uint32_t bytes_sent, uint32_t bytes_recv)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, bytes_sent);
    _mav_put_uint32_t(buf, 4, bytes_recv);
    _mav_put_int16_t(buf, 8, rsrp_dbm);
    _mav_put_uint8_t(buf, 10, state);
    _mav_put_int8_t(buf, 11, rsrq_db);
    _mav_put_int8_t(buf, 12, sinr_db);
    _mav_put_uint8_t(buf, 45, freq_band);
    _mav_put_char_array(buf, 13, default_interface, 16);
    _mav_put_char_array(buf, 29, operator_name, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
#else
    mavlink_aviant_indicator_c2_link_t *packet = (mavlink_aviant_indicator_c2_link_t *)msgbuf;
    packet->bytes_sent = bytes_sent;
    packet->bytes_recv = bytes_recv;
    packet->rsrp_dbm = rsrp_dbm;
    packet->state = state;
    packet->rsrq_db = rsrq_db;
    packet->sinr_db = sinr_db;
    packet->freq_band = freq_band;
    mav_array_memcpy(packet->default_interface, default_interface, sizeof(char)*16);
    mav_array_memcpy(packet->operator_name, operator_name, sizeof(char)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK, (const char *)packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_INDICATOR_C2_LINK UNPACKING


/**
 * @brief Get field state from aviant_indicator_c2_link message
 *
 * @return  Overall C2 link status
 */
static inline uint8_t mavlink_msg_aviant_indicator_c2_link_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field rsrp_dbm from aviant_indicator_c2_link message
 *
 * @return [dBm] Reference Signal Received Power
 */
static inline int16_t mavlink_msg_aviant_indicator_c2_link_get_rsrp_dbm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field rsrq_db from aviant_indicator_c2_link message
 *
 * @return [dB] Reference Signal Received Quality
 */
static inline int8_t mavlink_msg_aviant_indicator_c2_link_get_rsrq_db(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  11);
}

/**
 * @brief Get field sinr_db from aviant_indicator_c2_link message
 *
 * @return [dB] Signal to Interference plus Noise Ratio
 */
static inline int8_t mavlink_msg_aviant_indicator_c2_link_get_sinr_db(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  12);
}

/**
 * @brief Get field default_interface from aviant_indicator_c2_link message
 *
 * @return  Default network interface name
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_get_default_interface(const mavlink_message_t* msg, char *default_interface)
{
    return _MAV_RETURN_char_array(msg, default_interface, 16,  13);
}

/**
 * @brief Get field operator_name from aviant_indicator_c2_link message
 *
 * @return  Network operator name
 */
static inline uint16_t mavlink_msg_aviant_indicator_c2_link_get_operator_name(const mavlink_message_t* msg, char *operator_name)
{
    return _MAV_RETURN_char_array(msg, operator_name, 16,  29);
}

/**
 * @brief Get field freq_band from aviant_indicator_c2_link message
 *
 * @return  LTE frequency band indicator
 */
static inline uint8_t mavlink_msg_aviant_indicator_c2_link_get_freq_band(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  45);
}

/**
 * @brief Get field bytes_sent from aviant_indicator_c2_link message
 *
 * @return [bytes] Cumulative bytes sent
 */
static inline uint32_t mavlink_msg_aviant_indicator_c2_link_get_bytes_sent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field bytes_recv from aviant_indicator_c2_link message
 *
 * @return [bytes] Cumulative bytes received
 */
static inline uint32_t mavlink_msg_aviant_indicator_c2_link_get_bytes_recv(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Decode a aviant_indicator_c2_link message into a struct
 *
 * @param msg The message to decode
 * @param aviant_indicator_c2_link C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_indicator_c2_link_decode(const mavlink_message_t* msg, mavlink_aviant_indicator_c2_link_t* aviant_indicator_c2_link)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_indicator_c2_link->bytes_sent = mavlink_msg_aviant_indicator_c2_link_get_bytes_sent(msg);
    aviant_indicator_c2_link->bytes_recv = mavlink_msg_aviant_indicator_c2_link_get_bytes_recv(msg);
    aviant_indicator_c2_link->rsrp_dbm = mavlink_msg_aviant_indicator_c2_link_get_rsrp_dbm(msg);
    aviant_indicator_c2_link->state = mavlink_msg_aviant_indicator_c2_link_get_state(msg);
    aviant_indicator_c2_link->rsrq_db = mavlink_msg_aviant_indicator_c2_link_get_rsrq_db(msg);
    aviant_indicator_c2_link->sinr_db = mavlink_msg_aviant_indicator_c2_link_get_sinr_db(msg);
    mavlink_msg_aviant_indicator_c2_link_get_default_interface(msg, aviant_indicator_c2_link->default_interface);
    mavlink_msg_aviant_indicator_c2_link_get_operator_name(msg, aviant_indicator_c2_link->operator_name);
    aviant_indicator_c2_link->freq_band = mavlink_msg_aviant_indicator_c2_link_get_freq_band(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN;
        memset(aviant_indicator_c2_link, 0, MAVLINK_MSG_ID_AVIANT_INDICATOR_C2_LINK_LEN);
    memcpy(aviant_indicator_c2_link, _MAV_PAYLOAD(msg), len);
#endif
}

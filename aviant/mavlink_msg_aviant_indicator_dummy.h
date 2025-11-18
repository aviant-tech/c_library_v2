#pragma once
// MESSAGE AVIANT_INDICATOR_DUMMY PACKING

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY 59001


typedef struct __mavlink_aviant_indicator_dummy_t {
 float float_value; /*<  */
 float float_array[4]; /*<  */
 int32_t int32_value; /*<  */
 uint8_t state; /*<  */
 uint8_t uint8_value; /*<  */
 char text_value[8]; /*<  */
} mavlink_aviant_indicator_dummy_t;

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN 34
#define MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN 34
#define MAVLINK_MSG_ID_59001_LEN 34
#define MAVLINK_MSG_ID_59001_MIN_LEN 34

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC 87
#define MAVLINK_MSG_ID_59001_CRC 87

#define MAVLINK_MSG_AVIANT_INDICATOR_DUMMY_FIELD_FLOAT_ARRAY_LEN 4
#define MAVLINK_MSG_AVIANT_INDICATOR_DUMMY_FIELD_TEXT_VALUE_LEN 8

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_DUMMY { \
    59001, \
    "AVIANT_INDICATOR_DUMMY", \
    6, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_aviant_indicator_dummy_t, state) }, \
         { "float_value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aviant_indicator_dummy_t, float_value) }, \
         { "float_array", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_aviant_indicator_dummy_t, float_array) }, \
         { "uint8_value", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_aviant_indicator_dummy_t, uint8_value) }, \
         { "int32_value", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_aviant_indicator_dummy_t, int32_value) }, \
         { "text_value", NULL, MAVLINK_TYPE_CHAR, 8, 26, offsetof(mavlink_aviant_indicator_dummy_t, text_value) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_DUMMY { \
    "AVIANT_INDICATOR_DUMMY", \
    6, \
    {  { "state", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_aviant_indicator_dummy_t, state) }, \
         { "float_value", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aviant_indicator_dummy_t, float_value) }, \
         { "float_array", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_aviant_indicator_dummy_t, float_array) }, \
         { "uint8_value", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_aviant_indicator_dummy_t, uint8_value) }, \
         { "int32_value", NULL, MAVLINK_TYPE_INT32_T, 0, 20, offsetof(mavlink_aviant_indicator_dummy_t, int32_value) }, \
         { "text_value", NULL, MAVLINK_TYPE_CHAR, 8, 26, offsetof(mavlink_aviant_indicator_dummy_t, text_value) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_indicator_dummy message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  
 * @param float_value  
 * @param float_array  
 * @param uint8_value  
 * @param int32_value  
 * @param text_value  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t state, float float_value, const float *float_array, uint8_t uint8_value, int32_t int32_value, const char *text_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN];
    _mav_put_float(buf, 0, float_value);
    _mav_put_int32_t(buf, 20, int32_value);
    _mav_put_uint8_t(buf, 24, state);
    _mav_put_uint8_t(buf, 25, uint8_value);
    _mav_put_float_array(buf, 4, float_array, 4);
    _mav_put_char_array(buf, 26, text_value, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#else
    mavlink_aviant_indicator_dummy_t packet;
    packet.float_value = float_value;
    packet.int32_value = int32_value;
    packet.state = state;
    packet.uint8_value = uint8_value;
    mav_array_memcpy(packet.float_array, float_array, sizeof(float)*4);
    mav_array_memcpy(packet.text_value, text_value, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
}

/**
 * @brief Pack a aviant_indicator_dummy message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param state  
 * @param float_value  
 * @param float_array  
 * @param uint8_value  
 * @param int32_value  
 * @param text_value  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t state, float float_value, const float *float_array, uint8_t uint8_value, int32_t int32_value, const char *text_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN];
    _mav_put_float(buf, 0, float_value);
    _mav_put_int32_t(buf, 20, int32_value);
    _mav_put_uint8_t(buf, 24, state);
    _mav_put_uint8_t(buf, 25, uint8_value);
    _mav_put_float_array(buf, 4, float_array, 4);
    _mav_put_char_array(buf, 26, text_value, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#else
    mavlink_aviant_indicator_dummy_t packet;
    packet.float_value = float_value;
    packet.int32_value = int32_value;
    packet.state = state;
    packet.uint8_value = uint8_value;
    mav_array_memcpy(packet.float_array, float_array, sizeof(float)*4);
    mav_array_memcpy(packet.text_value, text_value, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#endif
}

/**
 * @brief Pack a aviant_indicator_dummy message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param state  
 * @param float_value  
 * @param float_array  
 * @param uint8_value  
 * @param int32_value  
 * @param text_value  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t state,float float_value,const float *float_array,uint8_t uint8_value,int32_t int32_value,const char *text_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN];
    _mav_put_float(buf, 0, float_value);
    _mav_put_int32_t(buf, 20, int32_value);
    _mav_put_uint8_t(buf, 24, state);
    _mav_put_uint8_t(buf, 25, uint8_value);
    _mav_put_float_array(buf, 4, float_array, 4);
    _mav_put_char_array(buf, 26, text_value, 8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#else
    mavlink_aviant_indicator_dummy_t packet;
    packet.float_value = float_value;
    packet.int32_value = int32_value;
    packet.state = state;
    packet.uint8_value = uint8_value;
    mav_array_memcpy(packet.float_array, float_array, sizeof(float)*4);
    mav_array_memcpy(packet.text_value, text_value, sizeof(char)*8);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
}

/**
 * @brief Encode a aviant_indicator_dummy struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_dummy C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_indicator_dummy_t* aviant_indicator_dummy)
{
    return mavlink_msg_aviant_indicator_dummy_pack(system_id, component_id, msg, aviant_indicator_dummy->state, aviant_indicator_dummy->float_value, aviant_indicator_dummy->float_array, aviant_indicator_dummy->uint8_value, aviant_indicator_dummy->int32_value, aviant_indicator_dummy->text_value);
}

/**
 * @brief Encode a aviant_indicator_dummy struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_dummy C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_indicator_dummy_t* aviant_indicator_dummy)
{
    return mavlink_msg_aviant_indicator_dummy_pack_chan(system_id, component_id, chan, msg, aviant_indicator_dummy->state, aviant_indicator_dummy->float_value, aviant_indicator_dummy->float_array, aviant_indicator_dummy->uint8_value, aviant_indicator_dummy->int32_value, aviant_indicator_dummy->text_value);
}

/**
 * @brief Encode a aviant_indicator_dummy struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_dummy C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_indicator_dummy_t* aviant_indicator_dummy)
{
    return mavlink_msg_aviant_indicator_dummy_pack_status(system_id, component_id, _status, msg,  aviant_indicator_dummy->state, aviant_indicator_dummy->float_value, aviant_indicator_dummy->float_array, aviant_indicator_dummy->uint8_value, aviant_indicator_dummy->int32_value, aviant_indicator_dummy->text_value);
}

/**
 * @brief Send a aviant_indicator_dummy message
 * @param chan MAVLink channel to send the message
 *
 * @param state  
 * @param float_value  
 * @param float_array  
 * @param uint8_value  
 * @param int32_value  
 * @param text_value  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_indicator_dummy_send(mavlink_channel_t chan, uint8_t state, float float_value, const float *float_array, uint8_t uint8_value, int32_t int32_value, const char *text_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN];
    _mav_put_float(buf, 0, float_value);
    _mav_put_int32_t(buf, 20, int32_value);
    _mav_put_uint8_t(buf, 24, state);
    _mav_put_uint8_t(buf, 25, uint8_value);
    _mav_put_float_array(buf, 4, float_array, 4);
    _mav_put_char_array(buf, 26, text_value, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
#else
    mavlink_aviant_indicator_dummy_t packet;
    packet.float_value = float_value;
    packet.int32_value = int32_value;
    packet.state = state;
    packet.uint8_value = uint8_value;
    mav_array_memcpy(packet.float_array, float_array, sizeof(float)*4);
    mav_array_memcpy(packet.text_value, text_value, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
#endif
}

/**
 * @brief Send a aviant_indicator_dummy message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_indicator_dummy_send_struct(mavlink_channel_t chan, const mavlink_aviant_indicator_dummy_t* aviant_indicator_dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_dummy_send(chan, aviant_indicator_dummy->state, aviant_indicator_dummy->float_value, aviant_indicator_dummy->float_array, aviant_indicator_dummy->uint8_value, aviant_indicator_dummy->int32_value, aviant_indicator_dummy->text_value);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY, (const char *)aviant_indicator_dummy, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_indicator_dummy_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t state, float float_value, const float *float_array, uint8_t uint8_value, int32_t int32_value, const char *text_value)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, float_value);
    _mav_put_int32_t(buf, 20, int32_value);
    _mav_put_uint8_t(buf, 24, state);
    _mav_put_uint8_t(buf, 25, uint8_value);
    _mav_put_float_array(buf, 4, float_array, 4);
    _mav_put_char_array(buf, 26, text_value, 8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
#else
    mavlink_aviant_indicator_dummy_t *packet = (mavlink_aviant_indicator_dummy_t *)msgbuf;
    packet->float_value = float_value;
    packet->int32_value = int32_value;
    packet->state = state;
    packet->uint8_value = uint8_value;
    mav_array_memcpy(packet->float_array, float_array, sizeof(float)*4);
    mav_array_memcpy(packet->text_value, text_value, sizeof(char)*8);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY, (const char *)packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_INDICATOR_DUMMY UNPACKING


/**
 * @brief Get field state from aviant_indicator_dummy message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_aviant_indicator_dummy_get_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field float_value from aviant_indicator_dummy message
 *
 * @return  
 */
static inline float mavlink_msg_aviant_indicator_dummy_get_float_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field float_array from aviant_indicator_dummy message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_get_float_array(const mavlink_message_t* msg, float *float_array)
{
    return _MAV_RETURN_float_array(msg, float_array, 4,  4);
}

/**
 * @brief Get field uint8_value from aviant_indicator_dummy message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_aviant_indicator_dummy_get_uint8_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field int32_value from aviant_indicator_dummy message
 *
 * @return  
 */
static inline int32_t mavlink_msg_aviant_indicator_dummy_get_int32_value(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  20);
}

/**
 * @brief Get field text_value from aviant_indicator_dummy message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_aviant_indicator_dummy_get_text_value(const mavlink_message_t* msg, char *text_value)
{
    return _MAV_RETURN_char_array(msg, text_value, 8,  26);
}

/**
 * @brief Decode a aviant_indicator_dummy message into a struct
 *
 * @param msg The message to decode
 * @param aviant_indicator_dummy C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_indicator_dummy_decode(const mavlink_message_t* msg, mavlink_aviant_indicator_dummy_t* aviant_indicator_dummy)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_indicator_dummy->float_value = mavlink_msg_aviant_indicator_dummy_get_float_value(msg);
    mavlink_msg_aviant_indicator_dummy_get_float_array(msg, aviant_indicator_dummy->float_array);
    aviant_indicator_dummy->int32_value = mavlink_msg_aviant_indicator_dummy_get_int32_value(msg);
    aviant_indicator_dummy->state = mavlink_msg_aviant_indicator_dummy_get_state(msg);
    aviant_indicator_dummy->uint8_value = mavlink_msg_aviant_indicator_dummy_get_uint8_value(msg);
    mavlink_msg_aviant_indicator_dummy_get_text_value(msg, aviant_indicator_dummy->text_value);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN;
        memset(aviant_indicator_dummy, 0, MAVLINK_MSG_ID_AVIANT_INDICATOR_DUMMY_LEN);
    memcpy(aviant_indicator_dummy, _MAV_PAYLOAD(msg), len);
#endif
}

#pragma once
// MESSAGE AVIANT_INDICATOR_TEMP_LOGGER PACKING

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER 59005


typedef struct __mavlink_aviant_indicator_temp_logger_t {
 uint8_t pi_internal_state; /*<  Pi internal temperature status*/
 int8_t pi_internal; /*< [degC] Pi internal temperature*/
 uint8_t cube_ambient_state; /*<  Cube ambient temperature status*/
 int8_t cube_ambient; /*< [degC] Cube ambient temperature*/
 uint8_t fuselage_ambient_state; /*<  Fuselage ambient temperature status*/
 int8_t fuselage_ambient; /*< [degC] Fuselage ambient temperature*/
 uint8_t outside_ambient_state; /*<  Outside ambient temperature status*/
 int8_t outside_ambient; /*< [degC] Outside ambient temperature*/
} mavlink_aviant_indicator_temp_logger_t;

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN 8
#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN 8
#define MAVLINK_MSG_ID_59005_LEN 8
#define MAVLINK_MSG_ID_59005_MIN_LEN 8

#define MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC 242
#define MAVLINK_MSG_ID_59005_CRC 242



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_TEMP_LOGGER { \
    59005, \
    "AVIANT_INDICATOR_TEMP_LOGGER", \
    8, \
    {  { "pi_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_aviant_indicator_temp_logger_t, pi_internal_state) }, \
         { "pi_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_aviant_indicator_temp_logger_t, pi_internal) }, \
         { "cube_ambient_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_aviant_indicator_temp_logger_t, cube_ambient_state) }, \
         { "cube_ambient", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_aviant_indicator_temp_logger_t, cube_ambient) }, \
         { "fuselage_ambient_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_aviant_indicator_temp_logger_t, fuselage_ambient_state) }, \
         { "fuselage_ambient", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_aviant_indicator_temp_logger_t, fuselage_ambient) }, \
         { "outside_ambient_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_aviant_indicator_temp_logger_t, outside_ambient_state) }, \
         { "outside_ambient", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_aviant_indicator_temp_logger_t, outside_ambient) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_INDICATOR_TEMP_LOGGER { \
    "AVIANT_INDICATOR_TEMP_LOGGER", \
    8, \
    {  { "pi_internal_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_aviant_indicator_temp_logger_t, pi_internal_state) }, \
         { "pi_internal", NULL, MAVLINK_TYPE_INT8_T, 0, 1, offsetof(mavlink_aviant_indicator_temp_logger_t, pi_internal) }, \
         { "cube_ambient_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_aviant_indicator_temp_logger_t, cube_ambient_state) }, \
         { "cube_ambient", NULL, MAVLINK_TYPE_INT8_T, 0, 3, offsetof(mavlink_aviant_indicator_temp_logger_t, cube_ambient) }, \
         { "fuselage_ambient_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_aviant_indicator_temp_logger_t, fuselage_ambient_state) }, \
         { "fuselage_ambient", NULL, MAVLINK_TYPE_INT8_T, 0, 5, offsetof(mavlink_aviant_indicator_temp_logger_t, fuselage_ambient) }, \
         { "outside_ambient_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_aviant_indicator_temp_logger_t, outside_ambient_state) }, \
         { "outside_ambient", NULL, MAVLINK_TYPE_INT8_T, 0, 7, offsetof(mavlink_aviant_indicator_temp_logger_t, outside_ambient) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_indicator_temp_logger message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pi_internal_state  Pi internal temperature status
 * @param pi_internal [degC] Pi internal temperature
 * @param cube_ambient_state  Cube ambient temperature status
 * @param cube_ambient [degC] Cube ambient temperature
 * @param fuselage_ambient_state  Fuselage ambient temperature status
 * @param fuselage_ambient [degC] Fuselage ambient temperature
 * @param outside_ambient_state  Outside ambient temperature status
 * @param outside_ambient [degC] Outside ambient temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_logger_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t pi_internal_state, int8_t pi_internal, uint8_t cube_ambient_state, int8_t cube_ambient, uint8_t fuselage_ambient_state, int8_t fuselage_ambient, uint8_t outside_ambient_state, int8_t outside_ambient)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN];
    _mav_put_uint8_t(buf, 0, pi_internal_state);
    _mav_put_int8_t(buf, 1, pi_internal);
    _mav_put_uint8_t(buf, 2, cube_ambient_state);
    _mav_put_int8_t(buf, 3, cube_ambient);
    _mav_put_uint8_t(buf, 4, fuselage_ambient_state);
    _mav_put_int8_t(buf, 5, fuselage_ambient);
    _mav_put_uint8_t(buf, 6, outside_ambient_state);
    _mav_put_int8_t(buf, 7, outside_ambient);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#else
    mavlink_aviant_indicator_temp_logger_t packet;
    packet.pi_internal_state = pi_internal_state;
    packet.pi_internal = pi_internal;
    packet.cube_ambient_state = cube_ambient_state;
    packet.cube_ambient = cube_ambient;
    packet.fuselage_ambient_state = fuselage_ambient_state;
    packet.fuselage_ambient = fuselage_ambient;
    packet.outside_ambient_state = outside_ambient_state;
    packet.outside_ambient = outside_ambient;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
}

/**
 * @brief Pack a aviant_indicator_temp_logger message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pi_internal_state  Pi internal temperature status
 * @param pi_internal [degC] Pi internal temperature
 * @param cube_ambient_state  Cube ambient temperature status
 * @param cube_ambient [degC] Cube ambient temperature
 * @param fuselage_ambient_state  Fuselage ambient temperature status
 * @param fuselage_ambient [degC] Fuselage ambient temperature
 * @param outside_ambient_state  Outside ambient temperature status
 * @param outside_ambient [degC] Outside ambient temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_logger_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t pi_internal_state, int8_t pi_internal, uint8_t cube_ambient_state, int8_t cube_ambient, uint8_t fuselage_ambient_state, int8_t fuselage_ambient, uint8_t outside_ambient_state, int8_t outside_ambient)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN];
    _mav_put_uint8_t(buf, 0, pi_internal_state);
    _mav_put_int8_t(buf, 1, pi_internal);
    _mav_put_uint8_t(buf, 2, cube_ambient_state);
    _mav_put_int8_t(buf, 3, cube_ambient);
    _mav_put_uint8_t(buf, 4, fuselage_ambient_state);
    _mav_put_int8_t(buf, 5, fuselage_ambient);
    _mav_put_uint8_t(buf, 6, outside_ambient_state);
    _mav_put_int8_t(buf, 7, outside_ambient);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#else
    mavlink_aviant_indicator_temp_logger_t packet;
    packet.pi_internal_state = pi_internal_state;
    packet.pi_internal = pi_internal;
    packet.cube_ambient_state = cube_ambient_state;
    packet.cube_ambient = cube_ambient;
    packet.fuselage_ambient_state = fuselage_ambient_state;
    packet.fuselage_ambient = fuselage_ambient;
    packet.outside_ambient_state = outside_ambient_state;
    packet.outside_ambient = outside_ambient;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#endif
}

/**
 * @brief Pack a aviant_indicator_temp_logger message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pi_internal_state  Pi internal temperature status
 * @param pi_internal [degC] Pi internal temperature
 * @param cube_ambient_state  Cube ambient temperature status
 * @param cube_ambient [degC] Cube ambient temperature
 * @param fuselage_ambient_state  Fuselage ambient temperature status
 * @param fuselage_ambient [degC] Fuselage ambient temperature
 * @param outside_ambient_state  Outside ambient temperature status
 * @param outside_ambient [degC] Outside ambient temperature
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_logger_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t pi_internal_state,int8_t pi_internal,uint8_t cube_ambient_state,int8_t cube_ambient,uint8_t fuselage_ambient_state,int8_t fuselage_ambient,uint8_t outside_ambient_state,int8_t outside_ambient)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN];
    _mav_put_uint8_t(buf, 0, pi_internal_state);
    _mav_put_int8_t(buf, 1, pi_internal);
    _mav_put_uint8_t(buf, 2, cube_ambient_state);
    _mav_put_int8_t(buf, 3, cube_ambient);
    _mav_put_uint8_t(buf, 4, fuselage_ambient_state);
    _mav_put_int8_t(buf, 5, fuselage_ambient);
    _mav_put_uint8_t(buf, 6, outside_ambient_state);
    _mav_put_int8_t(buf, 7, outside_ambient);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#else
    mavlink_aviant_indicator_temp_logger_t packet;
    packet.pi_internal_state = pi_internal_state;
    packet.pi_internal = pi_internal;
    packet.cube_ambient_state = cube_ambient_state;
    packet.cube_ambient = cube_ambient;
    packet.fuselage_ambient_state = fuselage_ambient_state;
    packet.fuselage_ambient = fuselage_ambient;
    packet.outside_ambient_state = outside_ambient_state;
    packet.outside_ambient = outside_ambient;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
}

/**
 * @brief Encode a aviant_indicator_temp_logger struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_temp_logger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_logger_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_indicator_temp_logger_t* aviant_indicator_temp_logger)
{
    return mavlink_msg_aviant_indicator_temp_logger_pack(system_id, component_id, msg, aviant_indicator_temp_logger->pi_internal_state, aviant_indicator_temp_logger->pi_internal, aviant_indicator_temp_logger->cube_ambient_state, aviant_indicator_temp_logger->cube_ambient, aviant_indicator_temp_logger->fuselage_ambient_state, aviant_indicator_temp_logger->fuselage_ambient, aviant_indicator_temp_logger->outside_ambient_state, aviant_indicator_temp_logger->outside_ambient);
}

/**
 * @brief Encode a aviant_indicator_temp_logger struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_temp_logger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_logger_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_indicator_temp_logger_t* aviant_indicator_temp_logger)
{
    return mavlink_msg_aviant_indicator_temp_logger_pack_chan(system_id, component_id, chan, msg, aviant_indicator_temp_logger->pi_internal_state, aviant_indicator_temp_logger->pi_internal, aviant_indicator_temp_logger->cube_ambient_state, aviant_indicator_temp_logger->cube_ambient, aviant_indicator_temp_logger->fuselage_ambient_state, aviant_indicator_temp_logger->fuselage_ambient, aviant_indicator_temp_logger->outside_ambient_state, aviant_indicator_temp_logger->outside_ambient);
}

/**
 * @brief Encode a aviant_indicator_temp_logger struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_indicator_temp_logger C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_indicator_temp_logger_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_indicator_temp_logger_t* aviant_indicator_temp_logger)
{
    return mavlink_msg_aviant_indicator_temp_logger_pack_status(system_id, component_id, _status, msg,  aviant_indicator_temp_logger->pi_internal_state, aviant_indicator_temp_logger->pi_internal, aviant_indicator_temp_logger->cube_ambient_state, aviant_indicator_temp_logger->cube_ambient, aviant_indicator_temp_logger->fuselage_ambient_state, aviant_indicator_temp_logger->fuselage_ambient, aviant_indicator_temp_logger->outside_ambient_state, aviant_indicator_temp_logger->outside_ambient);
}

/**
 * @brief Send a aviant_indicator_temp_logger message
 * @param chan MAVLink channel to send the message
 *
 * @param pi_internal_state  Pi internal temperature status
 * @param pi_internal [degC] Pi internal temperature
 * @param cube_ambient_state  Cube ambient temperature status
 * @param cube_ambient [degC] Cube ambient temperature
 * @param fuselage_ambient_state  Fuselage ambient temperature status
 * @param fuselage_ambient [degC] Fuselage ambient temperature
 * @param outside_ambient_state  Outside ambient temperature status
 * @param outside_ambient [degC] Outside ambient temperature
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_indicator_temp_logger_send(mavlink_channel_t chan, uint8_t pi_internal_state, int8_t pi_internal, uint8_t cube_ambient_state, int8_t cube_ambient, uint8_t fuselage_ambient_state, int8_t fuselage_ambient, uint8_t outside_ambient_state, int8_t outside_ambient)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN];
    _mav_put_uint8_t(buf, 0, pi_internal_state);
    _mav_put_int8_t(buf, 1, pi_internal);
    _mav_put_uint8_t(buf, 2, cube_ambient_state);
    _mav_put_int8_t(buf, 3, cube_ambient);
    _mav_put_uint8_t(buf, 4, fuselage_ambient_state);
    _mav_put_int8_t(buf, 5, fuselage_ambient);
    _mav_put_uint8_t(buf, 6, outside_ambient_state);
    _mav_put_int8_t(buf, 7, outside_ambient);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
#else
    mavlink_aviant_indicator_temp_logger_t packet;
    packet.pi_internal_state = pi_internal_state;
    packet.pi_internal = pi_internal;
    packet.cube_ambient_state = cube_ambient_state;
    packet.cube_ambient = cube_ambient;
    packet.fuselage_ambient_state = fuselage_ambient_state;
    packet.fuselage_ambient = fuselage_ambient;
    packet.outside_ambient_state = outside_ambient_state;
    packet.outside_ambient = outside_ambient;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
#endif
}

/**
 * @brief Send a aviant_indicator_temp_logger message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_indicator_temp_logger_send_struct(mavlink_channel_t chan, const mavlink_aviant_indicator_temp_logger_t* aviant_indicator_temp_logger)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_indicator_temp_logger_send(chan, aviant_indicator_temp_logger->pi_internal_state, aviant_indicator_temp_logger->pi_internal, aviant_indicator_temp_logger->cube_ambient_state, aviant_indicator_temp_logger->cube_ambient, aviant_indicator_temp_logger->fuselage_ambient_state, aviant_indicator_temp_logger->fuselage_ambient, aviant_indicator_temp_logger->outside_ambient_state, aviant_indicator_temp_logger->outside_ambient);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER, (const char *)aviant_indicator_temp_logger, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_indicator_temp_logger_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t pi_internal_state, int8_t pi_internal, uint8_t cube_ambient_state, int8_t cube_ambient, uint8_t fuselage_ambient_state, int8_t fuselage_ambient, uint8_t outside_ambient_state, int8_t outside_ambient)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, pi_internal_state);
    _mav_put_int8_t(buf, 1, pi_internal);
    _mav_put_uint8_t(buf, 2, cube_ambient_state);
    _mav_put_int8_t(buf, 3, cube_ambient);
    _mav_put_uint8_t(buf, 4, fuselage_ambient_state);
    _mav_put_int8_t(buf, 5, fuselage_ambient);
    _mav_put_uint8_t(buf, 6, outside_ambient_state);
    _mav_put_int8_t(buf, 7, outside_ambient);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER, buf, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
#else
    mavlink_aviant_indicator_temp_logger_t *packet = (mavlink_aviant_indicator_temp_logger_t *)msgbuf;
    packet->pi_internal_state = pi_internal_state;
    packet->pi_internal = pi_internal;
    packet->cube_ambient_state = cube_ambient_state;
    packet->cube_ambient = cube_ambient;
    packet->fuselage_ambient_state = fuselage_ambient_state;
    packet->fuselage_ambient = fuselage_ambient;
    packet->outside_ambient_state = outside_ambient_state;
    packet->outside_ambient = outside_ambient;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER, (const char *)packet, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_MIN_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_INDICATOR_TEMP_LOGGER UNPACKING


/**
 * @brief Get field pi_internal_state from aviant_indicator_temp_logger message
 *
 * @return  Pi internal temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_logger_get_pi_internal_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field pi_internal from aviant_indicator_temp_logger message
 *
 * @return [degC] Pi internal temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_logger_get_pi_internal(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  1);
}

/**
 * @brief Get field cube_ambient_state from aviant_indicator_temp_logger message
 *
 * @return  Cube ambient temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_logger_get_cube_ambient_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field cube_ambient from aviant_indicator_temp_logger message
 *
 * @return [degC] Cube ambient temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_logger_get_cube_ambient(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  3);
}

/**
 * @brief Get field fuselage_ambient_state from aviant_indicator_temp_logger message
 *
 * @return  Fuselage ambient temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_logger_get_fuselage_ambient_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field fuselage_ambient from aviant_indicator_temp_logger message
 *
 * @return [degC] Fuselage ambient temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_logger_get_fuselage_ambient(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  5);
}

/**
 * @brief Get field outside_ambient_state from aviant_indicator_temp_logger message
 *
 * @return  Outside ambient temperature status
 */
static inline uint8_t mavlink_msg_aviant_indicator_temp_logger_get_outside_ambient_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field outside_ambient from aviant_indicator_temp_logger message
 *
 * @return [degC] Outside ambient temperature
 */
static inline int8_t mavlink_msg_aviant_indicator_temp_logger_get_outside_ambient(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  7);
}

/**
 * @brief Decode a aviant_indicator_temp_logger message into a struct
 *
 * @param msg The message to decode
 * @param aviant_indicator_temp_logger C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_indicator_temp_logger_decode(const mavlink_message_t* msg, mavlink_aviant_indicator_temp_logger_t* aviant_indicator_temp_logger)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_indicator_temp_logger->pi_internal_state = mavlink_msg_aviant_indicator_temp_logger_get_pi_internal_state(msg);
    aviant_indicator_temp_logger->pi_internal = mavlink_msg_aviant_indicator_temp_logger_get_pi_internal(msg);
    aviant_indicator_temp_logger->cube_ambient_state = mavlink_msg_aviant_indicator_temp_logger_get_cube_ambient_state(msg);
    aviant_indicator_temp_logger->cube_ambient = mavlink_msg_aviant_indicator_temp_logger_get_cube_ambient(msg);
    aviant_indicator_temp_logger->fuselage_ambient_state = mavlink_msg_aviant_indicator_temp_logger_get_fuselage_ambient_state(msg);
    aviant_indicator_temp_logger->fuselage_ambient = mavlink_msg_aviant_indicator_temp_logger_get_fuselage_ambient(msg);
    aviant_indicator_temp_logger->outside_ambient_state = mavlink_msg_aviant_indicator_temp_logger_get_outside_ambient_state(msg);
    aviant_indicator_temp_logger->outside_ambient = mavlink_msg_aviant_indicator_temp_logger_get_outside_ambient(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN;
        memset(aviant_indicator_temp_logger, 0, MAVLINK_MSG_ID_AVIANT_INDICATOR_TEMP_LOGGER_LEN);
    memcpy(aviant_indicator_temp_logger, _MAV_PAYLOAD(msg), len);
#endif
}

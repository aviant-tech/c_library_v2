#pragma once
// MESSAGE AVIANT_TRN_TEST_DATA PACKING

#define MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA 59007


typedef struct __mavlink_aviant_trn_test_data_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot)*/
 float x; /*< [m] X Position in NED frame*/
 float y; /*< [m] Y Position in NED frame*/
 float z; /*< [m] Z Position in NED frame (negative altitude)*/
 float vx; /*< [m/s] X Velocity in NED frame*/
 float vy; /*< [m/s] Y Velocity in NED frame*/
 float vz; /*< [m/s] Z Velocity in NED frame*/
 float q1; /*<  Quaternion component w (scalar)*/
 float q2; /*<  Quaternion component x*/
 float q3; /*<  Quaternion component y*/
 float q4; /*<  Quaternion component z*/
} mavlink_aviant_trn_test_data_t;

#define MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN 44
#define MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN 44
#define MAVLINK_MSG_ID_59007_LEN 44
#define MAVLINK_MSG_ID_59007_MIN_LEN 44

#define MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC 222
#define MAVLINK_MSG_ID_59007_CRC 222



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AVIANT_TRN_TEST_DATA { \
    59007, \
    "AVIANT_TRN_TEST_DATA", \
    11, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_aviant_trn_test_data_t, time_boot_ms) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aviant_trn_test_data_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aviant_trn_test_data_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aviant_trn_test_data_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aviant_trn_test_data_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aviant_trn_test_data_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_aviant_trn_test_data_t, vz) }, \
         { "q1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_aviant_trn_test_data_t, q1) }, \
         { "q2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_aviant_trn_test_data_t, q2) }, \
         { "q3", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_aviant_trn_test_data_t, q3) }, \
         { "q4", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_aviant_trn_test_data_t, q4) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AVIANT_TRN_TEST_DATA { \
    "AVIANT_TRN_TEST_DATA", \
    11, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_aviant_trn_test_data_t, time_boot_ms) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aviant_trn_test_data_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aviant_trn_test_data_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aviant_trn_test_data_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aviant_trn_test_data_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aviant_trn_test_data_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_aviant_trn_test_data_t, vz) }, \
         { "q1", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_aviant_trn_test_data_t, q1) }, \
         { "q2", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_aviant_trn_test_data_t, q2) }, \
         { "q3", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_aviant_trn_test_data_t, q3) }, \
         { "q4", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_aviant_trn_test_data_t, q4) }, \
         } \
}
#endif

/**
 * @brief Pack a aviant_trn_test_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot)
 * @param x [m] X Position in NED frame
 * @param y [m] Y Position in NED frame
 * @param z [m] Z Position in NED frame (negative altitude)
 * @param vx [m/s] X Velocity in NED frame
 * @param vy [m/s] Y Velocity in NED frame
 * @param vz [m/s] Z Velocity in NED frame
 * @param q1  Quaternion component w (scalar)
 * @param q2  Quaternion component x
 * @param q3  Quaternion component y
 * @param q4  Quaternion component z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_trn_test_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_float(buf, 28, q1);
    _mav_put_float(buf, 32, q2);
    _mav_put_float(buf, 36, q3);
    _mav_put_float(buf, 40, q4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#else
    mavlink_aviant_trn_test_data_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
}

/**
 * @brief Pack a aviant_trn_test_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot)
 * @param x [m] X Position in NED frame
 * @param y [m] Y Position in NED frame
 * @param z [m] Z Position in NED frame (negative altitude)
 * @param vx [m/s] X Velocity in NED frame
 * @param vy [m/s] Y Velocity in NED frame
 * @param vz [m/s] Z Velocity in NED frame
 * @param q1  Quaternion component w (scalar)
 * @param q2  Quaternion component x
 * @param q3  Quaternion component y
 * @param q4  Quaternion component z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_trn_test_data_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_float(buf, 28, q1);
    _mav_put_float(buf, 32, q2);
    _mav_put_float(buf, 36, q3);
    _mav_put_float(buf, 40, q4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#else
    mavlink_aviant_trn_test_data_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#endif
}

/**
 * @brief Pack a aviant_trn_test_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot)
 * @param x [m] X Position in NED frame
 * @param y [m] Y Position in NED frame
 * @param z [m] Z Position in NED frame (negative altitude)
 * @param vx [m/s] X Velocity in NED frame
 * @param vy [m/s] Y Velocity in NED frame
 * @param vz [m/s] Z Velocity in NED frame
 * @param q1  Quaternion component w (scalar)
 * @param q2  Quaternion component x
 * @param q3  Quaternion component y
 * @param q4  Quaternion component z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aviant_trn_test_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float x,float y,float z,float vx,float vy,float vz,float q1,float q2,float q3,float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_float(buf, 28, q1);
    _mav_put_float(buf, 32, q2);
    _mav_put_float(buf, 36, q3);
    _mav_put_float(buf, 40, q4);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#else
    mavlink_aviant_trn_test_data_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
}

/**
 * @brief Encode a aviant_trn_test_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aviant_trn_test_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_trn_test_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aviant_trn_test_data_t* aviant_trn_test_data)
{
    return mavlink_msg_aviant_trn_test_data_pack(system_id, component_id, msg, aviant_trn_test_data->time_boot_ms, aviant_trn_test_data->x, aviant_trn_test_data->y, aviant_trn_test_data->z, aviant_trn_test_data->vx, aviant_trn_test_data->vy, aviant_trn_test_data->vz, aviant_trn_test_data->q1, aviant_trn_test_data->q2, aviant_trn_test_data->q3, aviant_trn_test_data->q4);
}

/**
 * @brief Encode a aviant_trn_test_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aviant_trn_test_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_trn_test_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aviant_trn_test_data_t* aviant_trn_test_data)
{
    return mavlink_msg_aviant_trn_test_data_pack_chan(system_id, component_id, chan, msg, aviant_trn_test_data->time_boot_ms, aviant_trn_test_data->x, aviant_trn_test_data->y, aviant_trn_test_data->z, aviant_trn_test_data->vx, aviant_trn_test_data->vy, aviant_trn_test_data->vz, aviant_trn_test_data->q1, aviant_trn_test_data->q2, aviant_trn_test_data->q3, aviant_trn_test_data->q4);
}

/**
 * @brief Encode a aviant_trn_test_data struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param aviant_trn_test_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aviant_trn_test_data_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_aviant_trn_test_data_t* aviant_trn_test_data)
{
    return mavlink_msg_aviant_trn_test_data_pack_status(system_id, component_id, _status, msg,  aviant_trn_test_data->time_boot_ms, aviant_trn_test_data->x, aviant_trn_test_data->y, aviant_trn_test_data->z, aviant_trn_test_data->vx, aviant_trn_test_data->vy, aviant_trn_test_data->vz, aviant_trn_test_data->q1, aviant_trn_test_data->q2, aviant_trn_test_data->q3, aviant_trn_test_data->q4);
}

/**
 * @brief Send a aviant_trn_test_data message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot)
 * @param x [m] X Position in NED frame
 * @param y [m] Y Position in NED frame
 * @param z [m] Z Position in NED frame (negative altitude)
 * @param vx [m/s] X Velocity in NED frame
 * @param vy [m/s] Y Velocity in NED frame
 * @param vz [m/s] Z Velocity in NED frame
 * @param q1  Quaternion component w (scalar)
 * @param q2  Quaternion component x
 * @param q3  Quaternion component y
 * @param q4  Quaternion component z
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aviant_trn_test_data_send(mavlink_channel_t chan, uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_float(buf, 28, q1);
    _mav_put_float(buf, 32, q2);
    _mav_put_float(buf, 36, q3);
    _mav_put_float(buf, 40, q4);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA, buf, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
#else
    mavlink_aviant_trn_test_data_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.x = x;
    packet.y = y;
    packet.z = z;
    packet.vx = vx;
    packet.vy = vy;
    packet.vz = vz;
    packet.q1 = q1;
    packet.q2 = q2;
    packet.q3 = q3;
    packet.q4 = q4;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA, (const char *)&packet, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
#endif
}

/**
 * @brief Send a aviant_trn_test_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aviant_trn_test_data_send_struct(mavlink_channel_t chan, const mavlink_aviant_trn_test_data_t* aviant_trn_test_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aviant_trn_test_data_send(chan, aviant_trn_test_data->time_boot_ms, aviant_trn_test_data->x, aviant_trn_test_data->y, aviant_trn_test_data->z, aviant_trn_test_data->vx, aviant_trn_test_data->vy, aviant_trn_test_data->vz, aviant_trn_test_data->q1, aviant_trn_test_data->q2, aviant_trn_test_data->q3, aviant_trn_test_data->q4);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA, (const char *)aviant_trn_test_data, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aviant_trn_test_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float x, float y, float z, float vx, float vy, float vz, float q1, float q2, float q3, float q4)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, x);
    _mav_put_float(buf, 8, y);
    _mav_put_float(buf, 12, z);
    _mav_put_float(buf, 16, vx);
    _mav_put_float(buf, 20, vy);
    _mav_put_float(buf, 24, vz);
    _mav_put_float(buf, 28, q1);
    _mav_put_float(buf, 32, q2);
    _mav_put_float(buf, 36, q3);
    _mav_put_float(buf, 40, q4);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA, buf, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
#else
    mavlink_aviant_trn_test_data_t *packet = (mavlink_aviant_trn_test_data_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->x = x;
    packet->y = y;
    packet->z = z;
    packet->vx = vx;
    packet->vy = vy;
    packet->vz = vz;
    packet->q1 = q1;
    packet->q2 = q2;
    packet->q3 = q3;
    packet->q4 = q4;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA, (const char *)packet, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_MIN_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE AVIANT_TRN_TEST_DATA UNPACKING


/**
 * @brief Get field time_boot_ms from aviant_trn_test_data message
 *
 * @return [ms] Timestamp (time since system boot)
 */
static inline uint32_t mavlink_msg_aviant_trn_test_data_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field x from aviant_trn_test_data message
 *
 * @return [m] X Position in NED frame
 */
static inline float mavlink_msg_aviant_trn_test_data_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y from aviant_trn_test_data message
 *
 * @return [m] Y Position in NED frame
 */
static inline float mavlink_msg_aviant_trn_test_data_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field z from aviant_trn_test_data message
 *
 * @return [m] Z Position in NED frame (negative altitude)
 */
static inline float mavlink_msg_aviant_trn_test_data_get_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vx from aviant_trn_test_data message
 *
 * @return [m/s] X Velocity in NED frame
 */
static inline float mavlink_msg_aviant_trn_test_data_get_vx(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vy from aviant_trn_test_data message
 *
 * @return [m/s] Y Velocity in NED frame
 */
static inline float mavlink_msg_aviant_trn_test_data_get_vy(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field vz from aviant_trn_test_data message
 *
 * @return [m/s] Z Velocity in NED frame
 */
static inline float mavlink_msg_aviant_trn_test_data_get_vz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field q1 from aviant_trn_test_data message
 *
 * @return  Quaternion component w (scalar)
 */
static inline float mavlink_msg_aviant_trn_test_data_get_q1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field q2 from aviant_trn_test_data message
 *
 * @return  Quaternion component x
 */
static inline float mavlink_msg_aviant_trn_test_data_get_q2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field q3 from aviant_trn_test_data message
 *
 * @return  Quaternion component y
 */
static inline float mavlink_msg_aviant_trn_test_data_get_q3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field q4 from aviant_trn_test_data message
 *
 * @return  Quaternion component z
 */
static inline float mavlink_msg_aviant_trn_test_data_get_q4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Decode a aviant_trn_test_data message into a struct
 *
 * @param msg The message to decode
 * @param aviant_trn_test_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_aviant_trn_test_data_decode(const mavlink_message_t* msg, mavlink_aviant_trn_test_data_t* aviant_trn_test_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aviant_trn_test_data->time_boot_ms = mavlink_msg_aviant_trn_test_data_get_time_boot_ms(msg);
    aviant_trn_test_data->x = mavlink_msg_aviant_trn_test_data_get_x(msg);
    aviant_trn_test_data->y = mavlink_msg_aviant_trn_test_data_get_y(msg);
    aviant_trn_test_data->z = mavlink_msg_aviant_trn_test_data_get_z(msg);
    aviant_trn_test_data->vx = mavlink_msg_aviant_trn_test_data_get_vx(msg);
    aviant_trn_test_data->vy = mavlink_msg_aviant_trn_test_data_get_vy(msg);
    aviant_trn_test_data->vz = mavlink_msg_aviant_trn_test_data_get_vz(msg);
    aviant_trn_test_data->q1 = mavlink_msg_aviant_trn_test_data_get_q1(msg);
    aviant_trn_test_data->q2 = mavlink_msg_aviant_trn_test_data_get_q2(msg);
    aviant_trn_test_data->q3 = mavlink_msg_aviant_trn_test_data_get_q3(msg);
    aviant_trn_test_data->q4 = mavlink_msg_aviant_trn_test_data_get_q4(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN? msg->len : MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN;
        memset(aviant_trn_test_data, 0, MAVLINK_MSG_ID_AVIANT_TRN_TEST_DATA_LEN);
    memcpy(aviant_trn_test_data, _MAV_PAYLOAD(msg), len);
#endif
}

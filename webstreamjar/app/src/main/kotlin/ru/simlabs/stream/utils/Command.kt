package ru.simlabs.stream.utils

enum class Command {
    // client -> server commands
    SET_CLIENT_TYPE,
    SET_CLIENT_LIMITATIONS,
    SET_CLIENT_RESOLUTION,
    ACTIVATE_POLICY_RULE,
    FORCE_IDR_FRAME,
    CLIENT_STAT_INFO,
    FRAME_RECEIVED,
    USE_AUTO_BITRATE,
    USE_DEBUG_FRAME,

    // server -> client
    FRAME_SENT,
    NEW_MP4_BLOB,
    SERVER_STAT_INFO,
}
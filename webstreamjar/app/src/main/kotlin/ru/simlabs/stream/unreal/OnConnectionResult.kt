package ru.simlabs.stream.unreal

import android.util.Log

class AndroidOnConnectionResult : (Boolean)->Unit {
    override fun invoke(result: Boolean) {
        resultResolver(result)
        Log.d("Connection Result", "Connection result is $result")
    }

    private external fun resultResolver(result: Boolean)
}
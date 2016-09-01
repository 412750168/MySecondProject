package com.example.zzl.mysecondproject;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    static{
        System.loadLibrary("Jnizzl");
    }

    public native String getStringFromZZl();
    public native String getStringFromYing(String str);


    private TextView textView = null;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        textView = (TextView)findViewById(R.id.textview_jni);
        int i =9;
        i = 10;

        int j = 11;
        j = j +2;
        textView.setText(getStringFromYing("zzl")+getStringFromZZl());
    }
}

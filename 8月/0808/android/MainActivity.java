package com.example.application;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import java.util.Timer;
import java.util.TimerTask;

public class MainActivity extends AppCompatActivity {
    private final int SKIP_DELAY_TIME = 10000;
    private Button button;
    private Button startNormalActivity;
    private Button startDiolagActivity;
    private String TAG= "MainActivity";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.d(TAG,"onCreate");
        setContentView(R.layout.activity_main);
        Button startNormalActivity = findViewById(R.id.button1);
        Button startDiolagActivity = findViewById(R.id.button2);
        Timer time = new Timer();
        TimerTask task = new TimerTask(){
            @Override
            public void run() {
                startActivity(new Intent(MainActivity.this,NormalActivity.class));
            }
        };
        time.schedule(task, SKIP_DELAY_TIME);

        startNormalActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this, NormalActivity.class);
                startActivity(intent);
            }
        });
        startDiolagActivity.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent = new Intent(MainActivity.this, DiolagActivity.class);
                startActivity(intent);
            }
        });
        //intView();
    }

    @Override
    protected void onStart() {
        super.onStart();
        Log.d(TAG,"OnStart");
    }

    @Override
    protected void onStop() {
        super.onStop();
        Log.d(TAG,"OnStop");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Log.d(TAG,"OnDestroy");
    }

    @Override
    protected void onPause() {
        super.onPause();
        Log.d(TAG,"OnPause");
    }

    @Override
    protected void onResume() {
        super.onResume();
        Log.d(TAG,"OnResume");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Log.d(TAG,"OnRestart");
    }
}
//    private void intView() {
//        button = findViewById(R.id.button);
//        button.setOnClickListener(new View.OnClickListener() {
//        @Override
//        public void onClick(View view) {
//            AlertDialog.Builder diolag = new AlertDialog.Builder(MainActivity.this);
//            diolag.setTitle("同学们辛苦了");
//            diolag.setMessage("我可能太菜了");
//            diolag.setPositiveButton("确定", new DialogInterface.OnClickListener() {
//                @Override
//                public void onClick(DialogInterface dialogInterface, int i) {
//                    Toast.makeText(MainActivity.this, "哈哈哈哈哈哈，我就是菜", Toast.LENGTH_LONG).show();
//
//                }
//            });
//            diolag.setNegativeButton("取消", new DialogInterface.OnClickListener() {
//                @Override
//                public void onClick(DialogInterface dialogInterface, int i) {
//                    Toast.makeText(MainActivity.this, "不不不不不不，我在努力", Toast.LENGTH_LONG).show();
//                }
//            });
//            diolag.show();
//        }
//    });
//    }
//}





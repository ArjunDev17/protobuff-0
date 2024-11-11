package com.arjun.proto.simple;

import com.example.options.AnotherDummy;
import exm.simple.SimpleOuterClass;

import java.util.Arrays;

public class SimpleMain {
    public void  msg(){
        System.out.println("inside simple main");
        //compare line 12 and 14 no need to use (.) operator
        AnotherDummy message1=AnotherDummy.newBuilder().build();

        SimpleOuterClass.Simple message=SimpleOuterClass.Simple.newBuilder()
                .setId(9)
                .setName("ramJI")
                .setIsSimple(true)
                .addSampleList(1)
                .addSampleList(2)
                .addSampleList(3)
                .addAllSampleList(Arrays.asList(4,5,6))

        .build();
        System.out.println("message here :"+message);
    }
}

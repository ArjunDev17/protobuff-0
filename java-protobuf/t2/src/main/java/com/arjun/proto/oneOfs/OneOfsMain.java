package com.arjun.proto.oneOfs;

import example.oneofs.OneOfs;

public class OneOfsMain {
    public static void main(String[] args) {
        OneOfs.Result message=OneOfs.Result.newBuilder()
                .setMessage("this is notification")
                .build();
        System.out.println("first msg :"+message);
        System.out.println(message.hasId());
        System.out.println(message.hasMessage());

        OneOfs.Result message2=OneOfs.Result.newBuilder(message)
                .setId(108)
                .build();

        System.out.println("message 2 :"+message2);
    }


}

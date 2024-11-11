package com.arjun.proto.ios;

import exm.simple.SimpleOuterClass;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class IOMains {
    private static void writeTo(SimpleOuterClass.Simple message,String path){
        try{
            FileOutputStream fileOutputStream=new FileOutputStream(path);
            message.writeTo(fileOutputStream);
        }catch (IOException e){
            e.printStackTrace();
        }
    }
    private  static  void readFrom(String path)  {
        try{
            FileInputStream fileInputStream=new FileInputStream(path);
            SimpleOuterClass.Simple message= SimpleOuterClass.Simple.parseFrom(fileInputStream);
            System.out.println(message);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    public static void main(String[] args) {

        SimpleOuterClass.Simple message=SimpleOuterClass.Simple.newBuilder()
                .setId(42)
                .setName("kabbu")
                .setIsSimple(true)
                .build();
        String path="simple.bin";
        writeTo(message,path);
        readFrom(path);
    }
}

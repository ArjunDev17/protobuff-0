package com.arjun.proto.enumerations;

import example.enumeration.Enumerations;

public class EnumerationEye {
    public void newEnumeration(){
        Enumerations.Enumeration enumeration= Enumerations.Enumeration.newBuilder()
                .setEyeColor(Enumerations.EyeColor.EYE_COLOR_BROWN)
                .build();

        System.out.println("data is :"+enumeration);
    }
}

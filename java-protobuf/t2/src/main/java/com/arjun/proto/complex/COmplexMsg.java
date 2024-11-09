package com.arjun.proto.complex;

import example.complex.ComplexOuterClass;

public class COmplexMsg {
    public ComplexOuterClass.Dummy newDummy(int id,String name){
        return ComplexOuterClass.Dummy.newBuilder()
                .setId(id)
                .setName(name)
                .build();
    }
}

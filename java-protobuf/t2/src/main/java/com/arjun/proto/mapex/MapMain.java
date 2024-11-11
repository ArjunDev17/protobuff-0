package com.arjun.proto.mapex;

import exm.maps.Maps;

import java.util.Map;

public class MapMain {
    private static Maps.IdWrapper newIdWrapper(int id){
        return Maps.IdWrapper.newBuilder().setId(id).build();
    }
    public static void main(String[] args) {
        Maps.mapsEx message=Maps.mapsEx.newBuilder()
                .putIds("myId",newIdWrapper(41))
                .putIds("myId-1",newIdWrapper(1))
                .putIds("myId-2",newIdWrapper(2))
                .putAllIds(
                        Map.of(
                                "mid-3",newIdWrapper(3),
                                "mid-4",newIdWrapper(4),
                                "mid-5",newIdWrapper(5),
                                "mid-6",newIdWrapper(6)
                        )
                )
                .build();
        System.out.println("data is :"+message);
    }
}

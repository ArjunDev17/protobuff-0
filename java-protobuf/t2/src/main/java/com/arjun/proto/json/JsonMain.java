package com.arjun.proto.json;

import exm.simple.SimpleOuterClass;  // Replace with your actual package
import com.google.protobuf.util.JsonFormat;  // Import JsonFormat

import java.util.Arrays;

public class JsonMain {
    private static String toJson(SimpleOuterClass.Simple message) throws Exception {
        // Convert Protobuf message to JSON
//        return JsonFormat.printer().print(message);
        /*
         json: {
                "id": 1,
                "isSimple": true,
                "name": "Maruti",
                 "sampleList": [1, 2, 3]
            }
        * */
        return JsonFormat.printer().
        omittingInsignificantWhitespace()
        .print(message);

    }

    private static SimpleOuterClass.Simple fromJson(String json) throws Exception {
        // Convert JSON back to Protobuf message
        SimpleOuterClass.Simple.Builder builder = SimpleOuterClass.Simple.newBuilder();
        JsonFormat.parser().merge(json, builder);
        return builder.build();
    }

    public static void main(String[] args) throws Exception {
        // Create a new Simple message
        SimpleOuterClass.Simple message = SimpleOuterClass.Simple.newBuilder()
                .setId(1)
                .setName("Maruti")
                .addAllSampleList(Arrays.asList(1,2,3))
                .setIsSimple(true)
                .build();

        // Convert the Protobuf message to JSON
        String json = toJson(message);
        System.out.println("json: " + json);

        // Convert JSON back to the Protobuf message
        System.out.println("from json: " + fromJson(json));
    }
}

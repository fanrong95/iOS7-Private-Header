/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#pragma mark Named Structures



struct CGPoint {

    double x;

    double y;

};



struct CGRect {

    struct CGPoint origin;

    struct CGSize size;

};



struct CGSize {

    double width;

    double height;

};



struct MLArtworkFormatSpec {

    unsigned int _field1;

    unsigned int _field2;

    unsigned int _field3;

    unsigned int _field4;

    int _field5;

    int _field6;

    _Bool _field7;

};



struct MLArtworkInstanceInfo {

    struct MLArtworkFormatSpec _field1;

    struct CGRect _field2;

};



struct UIEdgeInsets {

    double top;

    double left;

    double bottom;

    double right;

};



struct _NSRange {

    unsigned long long location;

    unsigned long long length;

};



#pragma mark Typedef'd Structures



typedef struct {

    unsigned int _field1[8];

} CDStruct_6ad76789;



typedef struct {

    long long value;

    int timescale;

    unsigned int flags;

    long long epoch;

} CDStruct_1b6d18a9;



typedef struct {

    int _field1;

    id _field2;

    double _field3;

    long long _field4;

    long long _field5;

    struct UIEdgeInsets _field6;

    struct UIEdgeInsets _field7;

    id _field8;

    id _field9;

    struct {

        double _field1;

        double _field2;

        double _field3;

        double _field4;

        double _field5;

        double _field6;

        double _field7;

        double _field8;

    } _field10;

} CDStruct_5ddd96cc;



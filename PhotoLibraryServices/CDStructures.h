/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@class NSMutableArray, NSMutableSet;



#pragma mark Named Structures



struct CGAffineTransform {

    double _field1;

    double _field2;

    double _field3;

    double _field4;

    double _field5;

    double _field6;

};



struct CGPoint {

    double _field1;

    double _field2;

};



struct CGRect {

    struct CGPoint _field1;

    struct CGSize _field2;

};



struct CGSize {

    double width;

    double height;

};



struct NSObject {

    Class _field1;

};



struct PLImageTableEntryFooter_s {

    struct {

        unsigned char _field1;

        unsigned char _field2;

        unsigned char _field3;

        unsigned char _field4;

        unsigned char _field5;

        unsigned char _field6;

        unsigned char _field7;

        unsigned char _field8;

        unsigned char _field9;

        unsigned char _field10;

        unsigned char _field11;

        unsigned char _field12;

        unsigned char _field13;

        unsigned char _field14;

        unsigned char _field15;

        unsigned char _field16;

    } _field1;

    unsigned int _field2;

    unsigned int _field3;

    int _field4;

};



struct _NSRange {

    unsigned long long _field1;

    unsigned long long _field2;

};



struct changeList_s {

    NSMutableSet *inserted;

    NSMutableSet *updated;

    NSMutableSet *deleted;

};



struct contentChanges_s {

    NSMutableArray *container;

    NSMutableArray *updatedContent;

};



struct flock {

    long long _field1;

    long long _field2;

    int _field3;

    short _field4;

    short _field5;

};



#pragma mark Typedef'd Structures



typedef struct {

    unsigned long long _field1;

    id *_field2;

    unsigned long long *_field3;

    unsigned long long _field4[5];

} CDStruct_70511ce9;



typedef struct {

    double _field1;

    double _field2;

} CDStruct_c3b9c2ee;



typedef struct {

    long long _field1;

    int _field2;

    unsigned int _field3;

    long long _field4;

} CDStruct_198678f7;



typedef struct {

    CDStruct_c3b9c2ee _field1;

    CDStruct_c3b9c2ee _field2;

} CDStruct_90e2a262;



typedef struct {

    CDStruct_198678f7 _field1;

    CDStruct_198678f7 _field2;

} CDStruct_3c1748cc;



typedef struct {

    int _field1;

    struct CGSize _field2;

    struct CGRect _field3;

    struct CGRect _field4;

    unsigned int _field5;

    int _field6;

    int _field7;

    double _field8[4];

    double _field9[4];

    unsigned int _field10;

} CDStruct_e5ce1f5a;



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPDumpType.h"


@class CPDumpEnum;



__attribute__((visibility("hidden")))

@interface CPDumpNumeric : CPDumpType

{

    int mType;

    CPDumpEnum *mEnumType;

}



- (void)dealloc;

- (id)enumType;

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;

- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;

- (id)initWithType:(int)arg1;

- (id)initWithType:(int)arg1 enumType:(id)arg2;

- (int)type;



@end



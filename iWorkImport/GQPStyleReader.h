/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQPObjectHandler.h"

#import "GQPObjectReader.h"



@class GQDSStyle, GQDSStylesheet;



__attribute__((visibility("hidden")))

@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler>

{

    int mStyleType;

    struct __CFArray *mEntries;

    GQDSStylesheet *mStylesheet;

    int mCurrentProperty;

    _Bool mStyleIsIdentified;

    _Bool mStyleIdentiferEqualsParentIdentifier;

    char *mIdentifier;

    char *mUid;

    char *mParentIdentifier;

    GQDSStyle *mStyle;

}



+ (void)initialize;

- (_Bool)beginProperty:(const char *)arg1;

- (int)beginReadingFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

- (id)createStyle;

- (void)dealloc;

- (void)doneProperty;

- (int)doneReading:(id)arg1;

- (void)handleBoolValue:(_Bool)arg1;

- (void)handleDoubleValue:(double)arg1;

- (void)handleFloatValue:(float)arg1;

- (void)handleIntValue:(int)arg1;

- (void)handleObject:(id)arg1;

- (id)initWithStyleType:(int)arg1;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CMDrawingAction : NSObject

{

    int _type;

    id _value;

    float _floatValue;

}



- (void)dealloc;

- (id)description;

- (float)floatValue;

- (id)initWithType:(int)arg1 andFloatValue:(float)arg2;

- (id)initWithType:(int)arg1 andValue:(id)arg2;

- (int)type;

- (id)value;



@end



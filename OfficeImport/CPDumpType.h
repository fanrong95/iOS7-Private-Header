/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface CPDumpType : NSObject

{

    NSString *mName;

}



- (void)dealloc;

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;

- (void)fromXml:(struct _xmlNode *)arg1 toBinary:(struct __sFILE *)arg2 state:(id)arg3;

- (id)init;

- (id)initWithName:(id)arg1;

- (id)name;

- (void)setName:(id)arg1;



@end



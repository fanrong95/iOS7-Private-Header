/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSString;



@interface _MFFlagChangeEntry : NSObject

{

    NSString *path;

    unsigned int uid;

    NSDictionary *changes;

    unsigned int connectionTag;

    double commitTime;

}



@property(readonly) NSDictionary *changes; // @synthesize changes;

@property double commitTime; // @synthesize commitTime;

@property unsigned int connectionTag; // @synthesize connectionTag;

- (void)dealloc;

- (id)initWithPath:(id)arg1 UID:(unsigned int)arg2 changes:(id)arg3;

@property(readonly) NSString *path; // @synthesize path;

@property(readonly) unsigned int uid; // @synthesize uid;



@end



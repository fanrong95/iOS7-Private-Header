/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class PDAnimationInfoData;



__attribute__((visibility("hidden")))

@interface PDAnimationInfo : NSObject

{

    PDAnimationInfoData *mEntrance;

    PDAnimationInfoData *mExit;

    PDAnimationInfoData *mMedia;

}



- (void)dealloc;

- (id)entranceData;

- (id)exitData;

@property(retain, nonatomic) PDAnimationInfoData *mediaData; // @synthesize mediaData=mMedia;

- (void)setEntranceData:(id)arg1;

- (void)setExitData:(id)arg1;



@end


/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class KNMacUILayout;



__attribute__((visibility("hidden")))

@interface KNMacArchivedUILayout : TSPObject

{

    KNMacUILayout *mUILayout;

}



- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithUILayout:(id)arg1 context:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) KNMacUILayout *uiLayout; // @synthesize uiLayout=mUILayout;



@end



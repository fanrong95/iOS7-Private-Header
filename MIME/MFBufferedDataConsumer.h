/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MFGuaranteedCollectingDataConsumer.h"



@class NSArray, NSMutableData, NSString;



@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>

{

    NSMutableData *_data;

    int _fd;

    NSString *_path;

    NSArray *_stack;

}



- (long long)appendData:(id)arg1;

- (id)data;

- (void)dealloc;

- (void)done;

- (id)init;



@end



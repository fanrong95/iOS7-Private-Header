/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableData;



@interface MFPartialNetworkData : NSObject

{

    NSMutableData *_rawData;

    NSMutableData *_unixData;

}



- (void)appendRawData:(id)arg1;

- (id)copyDataWithUnixLineEndings;

- (id)dataWithUnixLineEndings;

- (void)dealloc;

- (void)purgeCaches;

- (id)rawData;

- (unsigned long long)rawDataLength;

- (void)setRawData:(id)arg1;



@end



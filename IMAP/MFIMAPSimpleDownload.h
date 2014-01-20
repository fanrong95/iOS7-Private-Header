/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFIMAPDownload.h"


@class NSError, NSString;



@interface MFIMAPSimpleDownload : MFIMAPDownload

{

    NSString *_section;

    NSError *_error;

    unsigned long long _length;

    unsigned int _knownLength:1;

    unsigned int _complete:1;

    struct _NSRange _range;

    unsigned long long _originalDataLength;

    unsigned long long _offsetAdjustment;

}



- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;

- (unsigned long long)bytesFetched;

- (void)dealloc;

- (id)error;

- (unsigned long long)expectedLength;

- (void)handleFetchResult:(id)arg1;

- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 estimatedLength:(unsigned long long)arg3 consumer:(id)arg4;

- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4;

- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 length:(unsigned long long)arg3 lengthIsKnown:(_Bool)arg4 range:(struct _NSRange)arg5 consumer:(id)arg6;

- (id)initWithUid:(unsigned int)arg1 section:(id)arg2 range:(struct _NSRange)arg3 consumer:(id)arg4;

- (_Bool)isComplete;

- (unsigned long long)lengthOfDataBeforeLineConversion;

- (void)processResults;

- (id)section;

- (void)setError:(id)arg1;



@end



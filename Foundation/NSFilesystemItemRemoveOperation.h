/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSOperation.h"


@class NSError, NSString;



__attribute__((visibility("hidden")))

@interface NSFilesystemItemRemoveOperation : NSOperation

{

    id _delegate;

    NSString *_removePath;

    NSError *_error;

    void *_state;

    _Bool _filterUnderbars;

}



+ (id)_errorWithErrno:(int)arg1 atPath:(id)arg2;

+ (id)filesystemItemRemoveOperationWithPath:(id)arg1;

- (_Bool)_filtersUnderbars;

- (void)_setError:(id)arg1;

- (void)_setFilterUnderbars:(_Bool)arg1;

- (void)dealloc;

- (id)delegate;

- (id)error;

- (id)initWithPath:(id)arg1;

- (void)main;

- (void)setDelegate:(id)arg1;



@end



/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSOperationQueue : NSObject

{

    id _private;

    void *_reserved;

}



+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

+ (id)currentQueue;

+ (id)mainQueue;

- (id)__;

- (void)__:(id)arg1;

- (void)addOperation:(id)arg1;

- (void)addOperationWithBlock:(id)arg1;

- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;

- (void)cancelAllOperations;

- (void)dealloc;

- (id)description;

- (id)init;

- (_Bool)isSuspended;

- (long long)maxConcurrentOperationCount;

- (id)name;

- (unsigned long long)operationCount;

- (id)operations;

- (_Bool)overcommitsOperations;

- (void)setMaxConcurrentOperationCount:(long long)arg1;

- (void)setName:(id)arg1;

- (void)setOvercommitsOperations:(_Bool)arg1;

- (void)setSuspended:(_Bool)arg1;

- (void)waitUntilAllOperationsAreFinished;



@end



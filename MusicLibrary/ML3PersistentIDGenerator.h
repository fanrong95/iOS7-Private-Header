/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ML3DatabaseConnection;



__attribute__((visibility("hidden")))

@interface ML3PersistentIDGenerator : NSObject

{

    ML3DatabaseConnection *_connection;

    long long _currentPersistentID;

    long long _nextUsedPersistentID;

}



- (void).cxx_destruct;

- (void)_calculateNewRun;

- (id)initWithDatabaseConnection:(id)arg1;

- (long long)nextPersistentID;



@end



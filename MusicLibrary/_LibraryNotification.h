/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface _LibraryNotification : NSObject

{

    int _token;

    NSString *_distributedName;

    NSString *_localName;

}



- (void).cxx_destruct;

- (void)dealloc;

@property(retain) NSString *distributedName; // @synthesize distributedName=_distributedName;

- (id)init;

- (id)initWithDistributedName:(id)arg1 localName:(id)arg2;

@property(retain) NSString *localName; // @synthesize localName=_localName;

@property int token; // @synthesize token=_token;



@end



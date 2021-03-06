/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, NSString, NSURL;



@interface MMCSSimpleFile : NSObject

{

    int _fd;

    double _progress;

    NSString *_authToken;

    long long _encryptionBehavior;

    NSString *_localPath;

    NSURL *_requestURL;

    NSString *_requestorID;

    NSString *_guid;

    unsigned long long _itemID;

    NSData *_signature;

    NSData *_fileHash;

    unsigned long long _protocolFileSize;

}



@property(retain) NSString *authToken; // @synthesize authToken=_authToken;

- (void)dealloc;

- (id)description;

@property long long encryptionBehavior; // @synthesize encryptionBehavior=_encryptionBehavior;

@property int fd; // @synthesize fd=_fd;

@property(retain) NSData *fileHash; // @synthesize fileHash=_fileHash;

@property(retain) NSString *guid; // @synthesize guid=_guid;

- (id)init;

@property unsigned long long itemID; // @synthesize itemID=_itemID;

@property(retain) NSString *localPath; // @synthesize localPath=_localPath;

@property double progress; // @synthesize progress=_progress;

@property unsigned long long protocolFileSize; // @synthesize protocolFileSize=_protocolFileSize;

@property(retain) NSURL *requestURL; // @synthesize requestURL=_requestURL;

@property(retain) NSString *requestorID; // @synthesize requestorID=_requestorID;

@property(retain) NSData *signature; // @synthesize signature=_signature;



@end



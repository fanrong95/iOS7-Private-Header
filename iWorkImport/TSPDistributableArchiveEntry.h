/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSPIdentifiedDataRepresentation.h"



@class NSString, SFUDataRepresentation;



__attribute__((visibility("hidden")))

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation>

{

    long long _identifier;

    NSString *_fileStateIdentifier;

    SFUDataRepresentation *_objectData;

    set_6550bfbd *_ownedIds;

    int _classType;

    unsigned int _version;

    NSString *_relativeDataPath;

}



- (void).cxx_destruct;

@property(nonatomic) int classType; // @synthesize classType=_classType;

- (id)dataRepresentation;

- (void)dealloc;

- (id)fileStateIdentifier;

- (long long)identifier;

- (id)initWithIdentifier:(long long)arg1;

- (_Bool)isLoaded;

- (const set_6550bfbd *)ownedIds;

@property(copy, nonatomic) NSString *relativeDataPath; // @synthesize relativeDataPath=_relativeDataPath;

- (_Bool)setDataRepresentation:(id)arg1 shouldCopy:(_Bool)arg2 error:(id *)arg3;

- (void)setFileStateIdentifier:(id)arg1;

- (void)setOwnedIds:(const set_6550bfbd *)arg1;

@property(nonatomic) unsigned int version; // @synthesize version=_version;



@end



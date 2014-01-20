/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface STStgInfo : NSObject

{

    NSString *m_pstrName;

    int m_type;

    unsigned int m_userFlags;

    unsigned int m_size;

    long long m_creationTime;

    long long m_modificationTime;

    int m_accessMode;

    CDStruct_214f2dba m_clsid;

}



- (void)dealloc;

- (int)getAccessMode;

- (CDStruct_214f2dba)getCLSID;

- (long long)getCreationTime;

- (long long)getModificationTime;

- (id)getName;

- (unsigned int)getSize;

- (int)getType;

- (unsigned int)getUserFlags;

- (id)init;

- (id)initWithStgInfo:(struct _StgInfo *)arg1;

- (void)setAccessMode:(int)arg1;

- (void)setCLSID:(CDStruct_214f2dba)arg1;

- (void)setCreationTime:(long long)arg1;

- (void)setModificationTime:(long long)arg1;

- (void)setName:(id)arg1;

- (void)setSize:(unsigned int)arg1;

- (void)setType:(int)arg1;

- (void)setUserFlags:(unsigned int)arg1;



@end



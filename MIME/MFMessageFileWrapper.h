/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData, NSMutableDictionary, NSString;



@interface MFMessageFileWrapper : NSObject

{

    NSString *_path;

    NSString *_filename;

    NSString *_preferredFilename;

    NSData *_data;

    NSMutableDictionary *_attributes;

    NSString *_linkDestination;

    NSString *_url;

    int _type;

}



- (id)URL;

- (void)_isImage:(_Bool *)arg1 orPDFFile:(_Bool *)arg2;

- (id)contentID;

- (unsigned int)creator;

- (void)dealloc;

- (id)description;

- (id)eventUniqueID;

- (id)fileAttributes;

- (id)fileProtection;

- (id)fileWrappers;

- (id)filename;

- (unsigned short)finderFlags;

- (id)icsRepresentation;

- (id)inferredMimeType;

- (id)initRegularFileWithContents:(id)arg1;

- (id)initSymbolicLinkWithDestination:(id)arg1;

- (id)initWithPath:(id)arg1;

- (_Bool)isDirectory;

- (_Bool)isImageFile;

- (_Bool)isPDFFile;

- (_Bool)isPlaceholder;

- (_Bool)isRegularFile;

- (_Bool)isSymbolicLink;

- (_Bool)isUnzippableFile;

- (id)meetingStorePersistentID;

- (id)messageID;

- (id)mimeType;

- (id)path;

- (id)preferredFilename;

- (id)regularFileContents;

- (void)setContentID:(id)arg1;

- (void)setCreator:(unsigned int)arg1;

- (void)setEventUniqueID:(id)arg1;

- (void)setFileAttributes:(id)arg1;

- (void)setFileProtection:(id)arg1;

- (void)setFilename:(id)arg1;

- (void)setFinderFlags:(unsigned short)arg1;

- (void)setICSRepresentation:(id)arg1;

- (void)setMeetingStorePersistentID:(id)arg1;

- (void)setMessageID:(id)arg1;

- (void)setMimeType:(id)arg1;

- (void)setPath:(id)arg1;

- (void)setPreferredFilename:(id)arg1;

- (void)setType:(unsigned int)arg1;

- (void)setURL:(id)arg1;

- (id)symbolicLinkDestination;

- (unsigned int)type;



@end



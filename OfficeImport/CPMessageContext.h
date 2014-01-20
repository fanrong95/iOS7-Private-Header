/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableDictionary, NSMutableSet;



__attribute__((visibility("hidden")))

@interface CPMessageContext : NSObject

{

    NSMutableSet *m_warnings;

    NSMutableSet *m_errors;

    NSMutableArray *m_currentObjectStack;

    NSMutableDictionary *m_placeholderToObjectIdMap;

}



+ (void)createContextForCurrentThread;

+ (id)currentObjectOrPlaceholder;

+ (id)getErrorArray;

+ (id)getWarningArray;

+ (void)initialize;

+ (_Bool)isFileStructuredStorage;

+ (void)popCurrentObject;

+ (void)popCurrentPlaceholder:(id)arg1;

+ (void)pushCurrentObject:(id)arg1;

+ (id)pushCurrentPlaceholder;

+ (void)removeContextForCurrentThread;

+ (void)replacePlaceholdersWithObjects;

+ (void)reportError:(struct CPTaggedMessageStructure *)arg1;

+ (void)reportErrorException:(id)arg1;

+ (void)reportObject:(id)arg1 withWarning:(struct CPTaggedMessageStructure *)arg2;

+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct CPTaggedMessageStructure *)arg2 parameters:(struct __va_list_tag [1])arg3;

+ (void)reportWarning:(struct CPTaggedMessageStructure *)arg1;

+ (void)reportWarningException:(id)arg1;

+ (void)restoreObjectStack:(unsigned int)arg1;

+ (unsigned long long)saveObjectStack;

+ (void)setIsFileStructuredStorage:(_Bool)arg1;

+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;

- (void)dealloc;

- (id)init;



@end



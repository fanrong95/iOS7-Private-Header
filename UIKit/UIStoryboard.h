/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSBundle, NSDictionary, NSMutableDictionary, NSString;



@interface UIStoryboard : NSObject

{

    NSBundle *bundle;

    NSString *storyboardFileName;

    NSDictionary *identifierToNibNameMap;

    NSString *designatedEntryPointIdentifier;

    NSMutableDictionary *identifierToUINibMap;

}



+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;

@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle;

- (_Bool)containsNibNamed:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSString *designatedEntryPointIdentifier; // @synthesize designatedEntryPointIdentifier;

- (id)identifierForStringsFile;

@property(readonly, nonatomic) NSDictionary *identifierToNibNameMap; // @synthesize identifierToNibNameMap;

@property(readonly, nonatomic) NSMutableDictionary *identifierToUINibMap; // @synthesize identifierToUINibMap;

- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 designatedEntryPointIdentifier:(id)arg4;

- (id)instantiateInitialViewController;

- (id)instantiateViewControllerWithIdentifier:(id)arg1;

@property(readonly) NSString *name;

- (id)nibForStoryboardNibNamed:(id)arg1;

- (id)nibForViewControllerWithIdentifier:(id)arg1;

@property(readonly, nonatomic) NSString *storyboardFileName; // @synthesize storyboardFileName;



@end


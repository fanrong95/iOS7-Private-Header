/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSManagedObject.h"



@class NSSet, NSString, TDSchemaCategory;



@interface TDSchemaDefinition : NSManagedObject

{

}



+ (unsigned long long)elementDefinitionCountWithSchema:(id)arg1;

+ (const CDStruct_e3362728 *)elementDefinitionWithName:(id)arg1 withSchema:(id)arg2;

+ (const CDStruct_e3362728 *)sortedElementDefinitionAtIndex:(unsigned long long)arg1 withSchema:(id)arg2;

- (id)displayName;

- (id)previewImage;



// Remaining properties

@property(retain, nonatomic) TDSchemaCategory *category; // @dynamic category;

@property(retain, nonatomic) NSString *name; // @dynamic name;

@property(retain, nonatomic) NSSet *parts; // @dynamic parts;

@property _Bool published; // @dynamic published;



@end



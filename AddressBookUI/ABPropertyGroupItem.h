/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABCardGroupItem.h"


@class CNContact, CNLabeledValue, NSArray, NSString, NSURL;



@interface ABPropertyGroupItem : ABCardGroupItem

{

    _Bool _allowsIMessage;

    _Bool _allowsPhone;

    _Bool _allowsEmail;

    _Bool _modified;

    NSArray *_labeledValues;

    CNLabeledValue *_labeledValue;

    NSString *_property;

    NSArray *_contacts;

    CNContact *_contact;

    id <ABPropertyGroupItemDelegate> _delegate;

}



+ (id)newPropertyGroupItemForProperty:(id)arg1;

+ (id)propertyGroupItemWithLabeledValue:(id)arg1 property:(id)arg2 contact:(id)arg3;

+ (id)propertyGroupItemWithLabeledValue:(id)arg1 property:(id)arg2 contacts:(id)arg3;

- (void)_enumerateContactsAndValuesWithBlock:(id)arg1;

@property(nonatomic) _Bool allowsEmail; // @synthesize allowsEmail=_allowsEmail;

@property(nonatomic) _Bool allowsIMessage; // @synthesize allowsIMessage=_allowsIMessage;

@property(nonatomic) _Bool allowsPhone; // @synthesize allowsPhone=_allowsPhone;

- (id)bestLabel:(id)arg1;

- (id)bestValue:(id)arg1;

@property(readonly, nonatomic) _Bool canRemove;

@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;

@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;

- (void)dealloc;

@property(readonly, nonatomic) NSURL *defaultActionURL;

@property(nonatomic) id <ABPropertyGroupItemDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

@property(readonly, nonatomic) NSString *displayLabel;

- (id)displayStringForValue:(id)arg1;

@property(readonly, nonatomic) NSString *displayValue;

@property(readonly, nonatomic) NSString *editingStringValue;

- (id)emptyLabeledValue;

- (id)init;

- (id)initWithLabeledValue:(id)arg1 property:(id)arg2 contacts:(id)arg3;

- (id)initWithProperty:(id)arg1;

@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

- (_Bool)isEquivalentToItem:(id)arg1;

- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;

@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;

- (_Bool)isFavoriteOfType:(int)arg1;

@property(readonly, nonatomic, getter=isReadonly) _Bool readonly;

- (_Bool)isValidIdentifier:(int)arg1;

@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;

@property(retain, nonatomic) NSArray *labeledValues; // @synthesize labeledValues=_labeledValues;

- (void)mergeItem:(id)arg1;

@property(nonatomic) _Bool modified; // @synthesize modified=_modified;

@property(readonly, nonatomic) id normalizedValue;

@property(readonly, nonatomic) NSString *placeholderString;

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;

- (void)saveChanges;

- (void)updateLabeledValueWithLabel:(id)arg1;

- (void)updateLabeledValueWithValue:(id)arg1;

- (id)updateWithLabel:(id)arg1 value:(id)arg2;

- (id)valueForDisplayString:(id)arg1;



@end



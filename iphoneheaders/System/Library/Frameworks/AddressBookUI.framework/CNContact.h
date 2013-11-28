/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class NSArray, CNContactIdentifier, NSString, NSDateComponents, NSData;

@interface CNContact : NSObject <NSCopying, NSMutableCopying> {

	void* _record;
	void* _originalRecord;
	void* _source;
	void* _addressBook;
	NSArray* _linkedContacts;
	BOOL _unified;
	CNContactIdentifier* _identifier;
	unsigned _recordType;

}

@property (readonly) CNContactIdentifier * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * namePrefix; 
@property (readonly) NSString * givenName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * familyName; 
@property (readonly) NSString * nameSuffix; 
@property (readonly) NSString * previousFamilyName; 
@property (readonly) NSString * nickname; 
@property (readonly) NSString * phoneticGivenName; 
@property (readonly) NSString * phoneticMiddleName; 
@property (readonly) NSString * phoneticFamilyName; 
@property (readonly) NSString * organizationName; 
@property (readonly) NSString * departmentName; 
@property (readonly) NSString * jobTitle; 
@property (readonly) NSDateComponents * birthday; 
@property (readonly) NSString * note; 
@property (readonly) int contactType; 
@property (readonly) int nameOrder; 
@property (readonly) NSArray * phoneNumbers; 
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * urlAddresses; 
@property (readonly) NSArray * dates; 
@property (readonly) NSArray * instantMessageAddresses; 
@property (readonly) NSArray * relatedNames; 
@property (readonly) NSArray * socialProfiles; 
@property (readonly) NSArray * postalAddresses; 
@property (getter=isUnified,readonly) BOOL unified;                                  //@synthesize unified=_unified - In the implementation block
@property (readonly) NSString * personName; 
@property (readonly) NSString * displayName; 
@property (readonly) int recordID; 
@property (readonly) void* record; 
@property (readonly) NSString * fullName; 
@property (readonly) NSString * phoneticFullName; 
@property (readonly) NSString * primarySourceName; 
@property (readonly) CNContact * preferredContactForName; 
@property (readonly) CNContact * preferredContactForPhoto; 
@property (getter=isPreferredForName,readonly) BOOL preferredForName; 
@property (getter=isPreferredForPhoto,readonly) BOOL preferredForPhoto; 
@property (readonly) NSArray * ringtone; 
@property (readonly) NSArray * textTone; 
@property (readonly) NSData * photoThumbnail; 
@property (readonly) NSData * largestAvailablePhoto; 
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly; 
@property (getter=isUnknown,nonatomic,readonly) BOOL unknown; 
@property (getter=isFacebook,nonatomic,readonly) BOOL facebook; 
@property (readonly) void* originalRecord; 
@property (readonly) unsigned recordType;                                            //@synthesize recordType=_recordType - In the implementation block
@property (readonly) void* source; 
@property (readonly) void* addressBook;                                              //@synthesize addressBook=_addressBook - In the implementation block
@property (readonly) NSArray * linkedContacts; 
+(id)contact;
+(int)propertyIDForProperty:(id)arg1 ;
+(id)contactWithRecord:(void*)arg1 ;
+(int)defaultNameOrder;
+(id)contactWithRecord:(void*)arg1 unify:(BOOL)arg2 ;
+(id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void*)arg2 ;
+(id)propertiesFromPropertyIDs:(id)arg1 ;
+(id)propertyForPropertyID:(int)arg1 ;
-(id)initWithRecord:(void*)arg1 ;
-(BOOL)hasValidRecordID;
-(id)linkedContacts;
-(void)setLinkedContacts:(id)arg1 ;
-(BOOL)isReadonly;
-(BOOL)isUnknown;
-(int)maximumNumberOfValuesForProperty:(id)arg1 ;
-(id)supportedLabelsForProperty:(id)arg1 ;
-(BOOL)supportsInstantMessageService;
-(void*)originalRecord;
-(BOOL)deleteContact;
-(id)photoThumbnail;
-(id)personName;
-(int)contactType;
-(id)organizationName;
-(id)phoneticFullName;
-(id)jobTitle;
-(id)departmentName;
-(id)largestAvailablePhotoAndCropRect:(CGRect*)arg1 ;
-(void)removePhoto;
-(void)setImageData:(id)arg1 forFormat:(int)arg2 cropRect:(CGRect)arg3 ;
-(BOOL)isUnified;
-(id)preferredContactForPhoto;
-(id)largestAvailablePhoto;
-(id)phoneNumbers;
-(void)reloadRecord;
-(id)givenName;
-(id)primarySourceName;
-(BOOL)supportsCustomLabelsForProperty:(id)arg1 ;
-(unsigned)recordType;
-(id)localizedNameForProperty:(id)arg1 ;
-(BOOL)isPreferredForPhoto;
-(BOOL)isPreferredForName;
-(void)setPreferredForPhoto:(BOOL)arg1 ;
-(void)setPreferredForName:(BOOL)arg1 ;
-(id)vCardRepresentation;
-(id)postalAddresses;
-(id)initWithRecord:(void*)arg1 unify:(BOOL)arg2 ;
-(BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2 ;
-(id)_stringValueForProperty:(int)arg1 ;
-(id)_labelledValuesForProperty:(int)arg1 valueFromABValue:(/*^block*/ id)arg2 ;
-(id)_labelledStringValuesForProperty:(int)arg1 ;
-(id)_labeledValueForSoundIdentifier:(int)arg1 ;
-(id)_CNLabelFromABLabel:(CFStringRef)arg1 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(BOOL)hasLinkedContacts;
-(id)middleName;
-(id)previousFamilyName;
-(id)phoneticGivenName;
-(id)phoneticMiddleName;
-(id)phoneticFamilyName;
-(id)birthday;
-(id)note;
-(int)nameOrder;
-(id)preferredContactForName;
-(id)urlAddresses;
-(id)dates;
-(id)instantMessageAddresses;
-(id)relatedNames;
-(id)socialProfiles;
-(id)ringtone;
-(id)textTone;
-(BOOL)isFacebook;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)identifier;
-(id)familyName;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(id)displayName;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(CGRect)_squareCropRectForSize:(CGSize)arg1 ;
-(id)_squareImage:(id)arg1 ;
-(id)emailAddresses;
-(void)setPhoto:(id)arg1 ;
-(id)fullName;
-(void*)addressBook;
-(int)recordID;
-(id)namePrefix;
-(id)nameSuffix;
-(void)setAddressBook:(void*)arg1 ;
-(void*)record;
-(id)nickname;
@end

/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSURL, OCPPackageRelationshipCollection, OCPPackage;

@interface OCPPackagePart : NSObject {

	NSURL* mLocation;
	OCPPackageRelationshipCollection* mRelationships;
	OCPPackage* mPackage;
	xmlDoc* mDocument;

}
-(void)dealloc;
-(id)data;
-(id)location;
-(id)package;
-(id)firstPartWithRelationshipOfType:(id)arg1 ;
-(xmlDoc*)xmlDocument;
-(id)relationshipForIdentifier:(id)arg1 ;
-(xmlTextReaderRef)xmlReader;
-(id)relationshipsByType:(id)arg1 ;
-(id)contentType;
-(void)copyToFile:(id)arg1 ;
-(id)initWithLocation:(id)arg1 relationshipsXml:(xmlDoc*)arg2 package:(id)arg3 ;
@end

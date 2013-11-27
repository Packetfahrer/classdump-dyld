/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {

	hash_map<const long long, TSP::ComponentExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentExternalReferenceInfo> > >* _map;

}
-(void)saveToMessage:(RepeatedPtrField<TSP::ComponentExternalReference>*)arg1 ;
-(id)initWithMapSize:(unsigned long)arg1 ;
-(void)addExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(BOOL)arg3 ;
-(ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1 ;
-(void)enumerateExternalReferences:(/*^block*/ id)arg1 ;
-(id)initFromMessage:(const RepeatedPtrField<TSP::ComponentExternalReference>*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

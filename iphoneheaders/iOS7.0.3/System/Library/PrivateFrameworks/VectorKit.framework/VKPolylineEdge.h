/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKPolylineEdge : NSObject {

	SCD_Struct_VK47 _localBounds;
	shared_ptr<geo::MapEdge>* _mapEdge;
	vector<geo::Vec2Imp<float>, vk_allocator<geo::Vec2Imp<float> > >* _points;
	vector<geo::PolylineCoordinate, vk_allocator<geo::PolylineCoordinate> >* _routeOffsets;
	unsigned long _mapEdgeOffset;
	BOOL _clippedFront;
	BOOL _clippedBack;

}

@property (nonatomic,readonly) shared_ptr<geo::MapEdge>* mapEdge;              //@synthesize mapEdge=_mapEdge - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK119* feature; 
@property (nonatomic,readonly) Vec2Imp<float>* points; 
@property (nonatomic,readonly) unsigned long pointCount; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetA; 
@property (nonatomic,readonly) PolylineCoordinate routeOffsetB; 
@property (nonatomic,readonly) PolylineCoordinate* routeOffsets; 
@property (nonatomic,readonly) unsigned long mapEdgeOffset;                    //@synthesize mapEdgeOffset=_mapEdgeOffset - In the implementation block
@property (nonatomic,readonly) BOOL clippedFront;                              //@synthesize clippedFront=_clippedFront - In the implementation block
@property (nonatomic,readonly) BOOL clippedBack;                               //@synthesize clippedBack=_clippedBack - In the implementation block
-(void)dealloc;
-(id)description;
-(id).cxx_construct;
-(unsigned long)pointCount;
-(Vec2Imp<float>*)points;
-(SCD_Struct_VK119*)feature;
-(PolylineCoordinate)routeOffsetA;
-(PolylineCoordinate)routeOffsetB;
-(id)initWithRoadPath:(const RoadPathElement<std::__1::shared_ptr<geo::MapEdge> >*)arg1 sectionRect:(const SCD_Struct_VK47*)arg2 ;
-(void)calculateRouteOffsetsBetweenA:(PolylineCoordinate)arg1 andB:(PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4 ;
-(PolylineCoordinate*)routeOffsets;
-(shared_ptr<geo::MapEdge>*)mapEdge;
-(unsigned long)mapEdgeOffset;
-(BOOL)clippedFront;
-(BOOL)clippedBack;
-(void).cxx_destruct;
@end

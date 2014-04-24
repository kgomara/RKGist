//
//  RKGFile.h
//  Pods
//
//  Created by Kevin O'Mara on 4/24/14.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class RKGGist;

@interface RKGFile : NSManagedObject

@property (nonatomic, retain) NSString * filename;
@property (nonatomic, retain) id rawURL;
@property (nonatomic, retain) NSNumber * size;
@property (nonatomic, retain) RKGGist *gist;

@end

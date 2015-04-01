#import "MHNatGeoSegue.h"
#import "MHNatGeoViewControllerTransition.h"
@implementation MHNatGeoSegue

- (void) perform {
       [[self sourceViewController]presentNatGeoViewController:[self destinationViewController] completion:nil];
}
@end

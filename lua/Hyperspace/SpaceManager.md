---
layout: lua
title: SpaceManager
lang: en
---

# Class "SpaceManager"





## Methods
### CreateAsteroid ()
{: aria-label='Functions' }
#### [Asteroid](../Hyperspace/Asteroid) :CreateAsteroid ([Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Functions' }

______
### CreateBeam ()
{: aria-label='Functions' }
#### [BeamWeapon](../Hyperspace/BeamWeapon) :CreateBeam ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target1, [Pointf](../Hyperspace/Pointf) target2, integer targetSpace, integer length, number heading)
{: aria-label='Functions' }

______
### CreateBomb ()
{: aria-label='Functions' }
#### [BombProjectile](../Hyperspace/BombProjectile) :CreateBomb ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace)
{: aria-label='Functions' }

______
### CreateBurstProjectile ()
{: aria-label='Functions' }
#### [LaserBlast](../Hyperspace/LaserBlast) :CreateBurstProjectile ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, string image, boolean fake, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Functions' }

______
### CreateLaserBlast ()
{: aria-label='Functions' }
#### [LaserBlast](../Hyperspace/LaserBlast) :CreateLaserBlast ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Functions' }

______
### CreateMissile ()
{: aria-label='Functions' }
#### [Missile](../Hyperspace/Missile) :CreateMissile ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Functions' }

______
### CreatePDSFire ()
{: aria-label='Functions' }
#### [PDSFire](../Hyperspace/PDSFire) :CreatePDSFire ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Point](../Hyperspace/Point) position, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, boolean smoke)
{: aria-label='Functions' }

______
### DangerousEnvironment ()
{: aria-label='Functions' }
#### boolean :DangerousEnvironment ()
{: aria-label='Functions' }

______
### SwitchBackground ()
{: aria-label='Functions' }
#### [ImageDesc](../Hyperspace/ImageDesc) :SwitchBackground (string name)
{: aria-label='Functions' }

______
### SwitchPlanet ()
{: aria-label='Functions' }
#### [ImageDesc](../Hyperspace/ImageDesc) :SwitchPlanet (string name)
{: aria-label='Functions' }

______
### UpdatePlanetImage ()
{: aria-label='Functions' }
#### void :UpdatePlanetImage ()
{: aria-label='Functions' }

______
### UpdateProjectile ()
{: aria-label='Functions' }
#### void :UpdateProjectile ([Projectile](../Hyperspace/Projectile) proj)
{: aria-label='Functions' }

___


## Fields
### asteroidGenerator (Read-only)
{: aria-label='Variables' }
#### [AsteroidGenerator](../Hyperspace/AsteroidGenerator) .asteroidGenerator
{: aria-label='Variables' }

______
### bNebula (Read-only)
{: aria-label='Variables' }
#### boolean .bNebula
{: aria-label='Variables' }

______
### bPDS (Read-only)
{: aria-label='Variables' }
#### boolean .bPDS
{: aria-label='Variables' }

______
### bStorm (Read-only)
{: aria-label='Variables' }
#### boolean .bStorm
{: aria-label='Variables' }

______
### currentBack
{: aria-label='Variables' }
#### [GL_Texture](../Graphics/GL_Texture) .currentBack
{: aria-label='Variables' }

______
### currentPlanet
{: aria-label='Variables' }
#### [ImageDesc](../Hyperspace/ImageDesc) .currentPlanet
{: aria-label='Variables' }

______
### drones (Read-only)
{: aria-label='Variables' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .drones
{: aria-label='Variables' }
**Read-only**

______
### envTarget
{: aria-label='Variables' }
#### integer .envTarget
{: aria-label='Variables' }

______
### gamePaused (Read-only)
{: aria-label='Variables' }
#### boolean .gamePaused
{: aria-label='Variables' }
**Read-only**
[`AsteroidGenerator`](#AsteroidGenerator) `.asteroidGenerator`
`.asteroidGenerator.bRunning` will indicate if the current space has an asteroid hazard, similar to the variables below
**Read-only**
`bool` `.sunLevel`
**Read-only**
`bool` `.pulsarLevel`
**Read-only**
`bool` `.bPDS`
**Read-only**
`int` `.envTarget`
Dictate the current target of the PDS (0: player, 1: enemy, 2: both)
`bool` `.bNebula`
**Read-only**
`bool` `.bStorm`
**Read-only**

______
### projectiles (Read-only)
{: aria-label='Variables' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .projectiles
{: aria-label='Variables' }
**Read-only**

______
### pulsarLevel (Read-only)
{: aria-label='Variables' }
#### boolean .pulsarLevel
{: aria-label='Variables' }

______
### sunLevel (Read-only)
{: aria-label='Variables' }
#### boolean .sunLevel
{: aria-label='Variables' }

___

---
layout: lua
title: SpaceManager
lang: en
---

# Class "SpaceManager"





## Methods
### CreateAsteroid ()
{: aria-label='Methods' }
#### [Asteroid](../Hyperspace/Asteroid) :CreateAsteroid ([Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }

______
### CreateBeam ()
{: aria-label='Methods' }
#### [BeamWeapon](../Hyperspace/BeamWeapon) :CreateBeam ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target1, [Pointf](../Hyperspace/Pointf) target2, integer targetSpace, integer length, number heading)
{: aria-label='Methods' }

______
### CreateBomb ()
{: aria-label='Methods' }
#### [BombProjectile](../Hyperspace/BombProjectile) :CreateBomb ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace)
{: aria-label='Methods' }

______
### CreateBurstProjectile ()
{: aria-label='Methods' }
#### [LaserBlast](../Hyperspace/LaserBlast) :CreateBurstProjectile ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, string image, boolean fake, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }

______
### CreateLaserBlast ()
{: aria-label='Methods' }
#### [LaserBlast](../Hyperspace/LaserBlast) :CreateLaserBlast ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }

______
### CreateMissile ()
{: aria-label='Methods' }
#### [Missile](../Hyperspace/Missile) :CreateMissile ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Pointf](../Hyperspace/Pointf) position, integer space, integer ownerId, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, number heading)
{: aria-label='Methods' }

______
### CreatePDSFire ()
{: aria-label='Methods' }
#### [PDSFire](../Hyperspace/PDSFire) :CreatePDSFire ([WeaponBlueprint](../Hyperspace/WeaponBlueprint) weapon, [Point](../Hyperspace/Point) position, [Pointf](../Hyperspace/Pointf) target, integer targetSpace, boolean smoke)
{: aria-label='Methods' }

______
### DangerousEnvironment ()
{: aria-label='Methods' }
#### boolean :DangerousEnvironment ()
{: aria-label='Methods' }

______
### SwitchBackground ()
{: aria-label='Methods' }
#### [ImageDesc](../Hyperspace/ImageDesc) :SwitchBackground (string name)
{: aria-label='Methods' }

______
### SwitchPlanet ()
{: aria-label='Methods' }
#### [ImageDesc](../Hyperspace/ImageDesc) :SwitchPlanet (string name)
{: aria-label='Methods' }

______
### UpdatePlanetImage ()
{: aria-label='Methods' }
#### void :UpdatePlanetImage ()
{: aria-label='Methods' }

______
### UpdateProjectile ()
{: aria-label='Methods' }
#### void :UpdateProjectile ([Projectile](../Hyperspace/Projectile) proj)
{: aria-label='Methods' }

___


## Fields
### asteroidGenerator (Read-only)
{: aria-label='Fields' }
#### [AsteroidGenerator](../Hyperspace/AsteroidGenerator) .asteroidGenerator
{: aria-label='Fields' }

______
### bNebula (Read-only)
{: aria-label='Fields' }
#### boolean .bNebula
{: aria-label='Fields' }

______
### bPDS (Read-only)
{: aria-label='Fields' }
#### boolean .bPDS
{: aria-label='Fields' }

______
### bStorm (Read-only)
{: aria-label='Fields' }
#### boolean .bStorm
{: aria-label='Fields' }

______
### currentBack
{: aria-label='Fields' }
#### [GL_Texture](../Graphics/GL_Texture) .currentBack
{: aria-label='Fields' }

______
### currentPlanet
{: aria-label='Fields' }
#### [ImageDesc](../Hyperspace/ImageDesc) .currentPlanet
{: aria-label='Fields' }

______
### drones (Read-only)
{: aria-label='Fields' }
#### vector\<[SpaceDrone](../Hyperspace/SpaceDrone)\> .drones
{: aria-label='Fields' }
**Read-only**

______
### envTarget
{: aria-label='Fields' }
#### integer .envTarget
{: aria-label='Fields' }

______
### gamePaused (Read-only)
{: aria-label='Fields' }
#### boolean .gamePaused
{: aria-label='Fields' }
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
{: aria-label='Fields' }
#### vector\<[Projectile](../Hyperspace/Projectile)\> .projectiles
{: aria-label='Fields' }
**Read-only**

______
### pulsarLevel (Read-only)
{: aria-label='Fields' }
#### boolean .pulsarLevel
{: aria-label='Fields' }

______
### sunLevel (Read-only)
{: aria-label='Fields' }
#### boolean .sunLevel
{: aria-label='Fields' }

___

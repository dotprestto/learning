import { Request, Response } from 'express'
// importa o schema de users
// import User from '../schemas/User'

class UserController {
  public async index (req: Request, res: Response): Promise<Response> {
    // const users = await User.find()
    // return res.json(users)
    return res.json({ msg: 'Users' })
  }
}

export default new UserController()
